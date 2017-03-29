//Бойко Катерина
// К-13

#include <iostream>
#include "copyright.h"
#include "f.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukrainian");

    copyright();
    cout << "Завдання: програма за числовим масивом, що вводиться користувачем, знаходить середнє арифметичне індексів усіх максимальних елементів та значення максимального елементу.";

    double arr[max_arr_sz];
    int arr_sz = 0;
    double max_el = 0;
    double average;

    arr_in(arr, arr_sz);
    arr_out(arr, arr_sz);

    if( arr_sz ) {
        analyze(arr, arr_sz, max_el, average);
        results(max_el, average);
    }

    return 0;
}
