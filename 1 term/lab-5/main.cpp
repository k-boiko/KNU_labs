//
// К-13
// Бойко Катерина
//

#include <iostream>
#include "f.h"
#include "copyright.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukrainian");

    copyright();
    cout << "Завдання: Протабулювати функції f(x), S(x) та S(x)-f(x) на відрізку [a; b] з кроком h, де a0<a, b<b0 та a0 = -0.9, b0 = 0.9, f(x) = ch x, S(x) = ∑x^2n/2n!";

    double a0, b0, h, e;
    if(communicate(a0, b0, h, e)){
            cout << "Введені вами значення: "<< endl;
            cout << "a = "<<a0<<endl<<"b = "<<b0<<endl<<"h = "<<h<<endl<<"E = "<< e;
            cout << "Результати для введених вами значень:"<<endl;
            show_table(a0, b0, h, e);
    } else
        cout << "Некоректні вхідні дані";

    return 0;
}
