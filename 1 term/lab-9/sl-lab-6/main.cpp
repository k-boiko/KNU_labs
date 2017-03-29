//Бойко Катерина
// К-13

#include <iostream>
#include "f.h"

using namespace std;

void arr_in(double arr[], int &i){
    cout << "Введіть будь ласка дійсні числа. Дробову частину відділяти крапкою. Для збереження числа натиснути enter. Якщо бажаєте завершити ввід чисел, введіть будь-яку літеру.";
    while ( i < max_arr_sz ){
        cin >> arr[i];
        if(cin.fail())
            break;
        i++;
    }
}

void arr_out(double arr[], int a_sz){
    if( a_sz == 0 ){
        cout << "Масив порожній."<< endl;
        return;
    }
    cout << "Введені дані: ";

    for( int i = 0; i < a_sz - 1; i++ )
        cout << arr[i] << ", " ;
    cout << arr[a_sz-1] << "." << endl;
}

void analyze(double arr[], int arr_sz, double &max_el, double &average){
    int i_sum = 0;
    double i_amount = 0;
    for( int i = 0; i < arr_sz; i++ ){
        if( arr[i] == max_el ){
            i_amount++;
            i_sum += i;
        }
        if( arr[i] > max_el ){
            max_el = arr[i];
            i_amount = 1;
            i_sum = i;
        }
    }
    average = i_sum/i_amount;
}

void results(double max_el, double average){
    cout << "Значення максимального елементу: " << max_el << endl;
    cout << "Середнє арифметичне індексів максимальних елементів: " << average;
}

int laba6(){
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
