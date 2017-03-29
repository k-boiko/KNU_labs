#ifndef H_H_INCLUDED
#define H_H_INCLUDED

#include <iostream>
using namespace std;
double a, b, h, E;

void header(){
    cout << " ";
    for(int i = 0; i<44; i++)
        cout << "_";
    cout << endl << "|     x    |   f(x)   |   S(x)   | f(x)-S(x) |"<<endl;
}
void footer(){
    cout << "|";
    for(int i = 0; i<44; i++)
        cout << "_";
    cout << "|";
}

void horizontal_line(){
    for (int i=0; i<4; i++){
        if(i==0) cout << "|";
        for(int j=0; j<10; j++)
            cout << "-";
        if(i==3) {
            cout << "-|"<<endl;
            break;
        }
        cout << "+";
    }
}

double f(double x){
    return x;
}
double S(double x){
    return x*2;
}

void results(double i){
    double fx, sx;
    fx = f(i);
    sx=S(i);
    cout << "|  "<<i<<"  |  "<<fx<<"  |  "<<sx<<"  |  "<<sx-fx<<"   |"<<endl;
}

void show(){
    header();
    for(double i=a; i<=b; i+=h){
        horizontal_line();
        results(i);
    }
    footer();
}

void communicate(){
    cout << "Please enter start value:";
    cin >> a;
    cout << "finish value:";
    cin >> b;
    cout << "step:";
    cin >> h;
    cout << "epsilon:";
    cin >> E;
    cout <<"Thanks!"<<endl<< "Results for numbers you entered are:"<<endl;
}



#endif // H_H_INCLUDED
