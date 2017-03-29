//
// К-13
// Бойко Катерина
//

#include <iostream>
#include <exception>
#include <cmath>
#include "f.h"

using namespace std;

void header(){
    cout << " ";
    for( int i = 0; i < 52; i++ )
        cout << "_";
    cout << endl << "|      x     |    f(x)    |    S(x)    |  S(x)-f(x)  |" << endl;
}

void footer(){
    cout << "|";
    for( int i = 0; i < 52; i++ )
        cout << "_";
    cout << "|";
}

void horizontal_line(){
    for( int i = 0; i < 6; i++ ){
        if( i == 0 )
            cout << "|";
        for( int j = 0; j < 12; j++ )
            cout << "-";
        if( i == 3 ) {
            cout << "-|" << endl;
            break;
        }
        cout << "+";
    }
}

long long fact( int N ){
    if( N < 0 )
        return 0;
    if ( N == 0 )
        return 1;
    else
        return N * fact(N - 1);
}

double fdn( int n, double x ){
    return pow(x, 2*n) / fact(2*n);
}

double S( double x, double eps ){
    double Sn = 0, dn;
    int n = 0;
    while( abs(dn = fdn(n++, x)) >= eps )
        Sn += dn;
    return Sn;
}

void results( double i, double E ){
    double fx, sx;
    fx = cosh(i);
    sx = S(i, E);
    cout << fixed;
    cout.precision(6);
    cout << "| ";
    if( i >= 0 )
        cout << " ";
    cout << i << "  |  " << fx << "  |  " << sx << "  | ";
    if( sx - fx >= 0 )
        cout << " ";
    cout << sx - fx << "   |" << endl;
}

void show_table( double a0, double b0, double h, double E ){
    header();
    for( double x = a0; x <= b0; x += h ){
        horizontal_line();
        results(x, E);
    }
    footer();
}

int communicate( double &a0, double &b0, double &h, double &E ){
    cout << "Введіть будь ласка проміжок, на якому табулюватиметься функція. Дробову частину відділяти крапкою.";

    cout << "Початкове значення (більще " << a << "):";
    cin >> a0;
    if( cin.fail() || a0 < a )
        return 0;

    cout << "Кінцеве значення(менше " << b << "):";
    cin >> b0;
    if( cin.fail() || b0 > b )
        return 0;

    cout << "Крок:";
    cin >> h;
    if( cin.fail() || h < minH )
        return 0;

    cout << "Точність обчислень:";
    cin >> E;
    if(cin.fail()|| E <= minE )
        return 0;

    cout << endl;

    return 1;
}
