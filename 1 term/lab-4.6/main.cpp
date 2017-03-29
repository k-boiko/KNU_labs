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
    cout << "Ця програма призначена для обчислення значень функції для введеної користувачем значення x." << endl;
    cout << "Введіть, будь ласка значення х (відмінне від 1), дробову частину відділяючи крапкою: " << endl;

    double x, result = 0;

    try{
        cin >> x;
        if(cin.fail()){
            cin.clear();
            cin.sync();
            throw "Помилка читання числа: введено символ.";
        }
        try{
            result = f(x);
        }catch(const char *e){
            throw e;
        }
    }catch(const char *e){
        cout << e <<endl;
        return 0;
    }

    cout << "Введені вами значення змінних:"<<endl<<"x = "<<x<<endl;
    cout << "За таких значень х значення функції f(x) = arcsin(1/3) + 1/(1-x) складатиме " << result;

    return 0;
}
