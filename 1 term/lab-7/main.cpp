//Бойко Катерина
// К-13

#include <iostream>
#include "f.h"
#include "copyright.h"

using namespace std;


int main()
{
    setlocale(LC_ALL, "Ukrainian");

    copyright();
    cout <<"Завдання: За числовою послідовністю, що вводить користувач, знайти кількість «пиків» у послідовності (пиком послідовності (an)nєN будемо вважати максимальну підпослідовність ai, ..., aj, ..., ak, таку, що ai≤...≤aj≥aj+1≥...≥ak);"<<endl;

    double arr[max_arr_sz];
    int a_sz = 0;

    arr_in(arr, a_sz);
    arr_out(arr, a_sz);

    if( a_sz ){
        int p_am = calculate(arr, a_sz);
        cout << "Кількість пиків введеної вами послідовності: "<< p_am;
    }

    return 0;
}
