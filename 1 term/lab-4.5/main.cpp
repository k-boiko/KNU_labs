//
// К-13
// Бойко Катерина
//


#include <iostream>
#include <locale.h>
#include "f.h"
#include "copyright.h"

using namespace std;

int main()
{
    setlocale(LC_ALL,"Ukrainian");

    copyright();
    cout << "Ця програма призначена для обчислення значень функції для введеної користувачем значення x."<< endl;
    cout << "Введіть, будь ласка значення х (відмінне від 1), дробову частину відділяючи крапкою: "<< endl;

    double x;
    cin >> x;

    double result = 0;

    bool isok;
    if(x==1)
        isok = false;
    else{
        isok = true;
        result = f(x);
    }

    cout << "Введені вами значення змінних:"<<endl<<"x = "<<x<<endl;

    if(isok)
        cout << "При таких значеннях х значення функції f(x) = arcsin(1/3) + 1/(1-x) складатиме " << result;
    else
        cout << "Неможливо виконати обчислення: введені Вами дані не входять до області визначення виразу.";

    return 0;
}
