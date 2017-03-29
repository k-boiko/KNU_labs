//Бойко Катерина
//К-13

#include <iostream>
#include "f.h"

using namespace std;

void arr_in ( double arr[], int &i ){
    cout << "Введіть будь ласка числову послідовність. Дробову частину відділяти крапкою. Після введення члена послідовності натиснути enter. Для завершення вводу ввести будь-яку літеру.";
    for( ; i < max_arr_sz; i++ ){
        cin >> arr[i];
        if(cin.fail())
            break;
    }
}

void arr_out ( double arr[], int a_sz ){
    if( a_sz == 0 ){
        cout << "Масив порожній." << endl;
        return;
    }
    cout << "Введені дані: ";
    for( int i = 0; i < a_sz - 1; i++ )
        cout << arr[i] << ", " ;
    cout << arr[a_sz-1] << "." << endl;
}

int calculate( double arr[], int a_sz ){
    int peak_am = 1;
    bool is_peak = false;
    for( int i = 0; i < a_sz; i++ ){

        //перевірка елементів на рівність
        if( arr[i] == arr[i+1]){
            is_peak = true;
            continue;
        }

        // перевірка елементу на відповідність умові приналежності "пику":
        if(
           arr[i-1] < arr[i] && arr[i] < arr[i+1] ||
           arr[i-1] > arr[i] && arr[i] > arr[i+1] ||
           arr[i-1] < arr[i] && arr[i] > arr[i+1]
        ){
            is_peak = true;
            continue;
        }

        // перевірка елементу на відповідність умові завершення "пику"
        if( i != 0 && i + 1 != a_sz &&
            arr[i-1] >= arr[i] &&
            arr[i] < arr[i+1] &&
            is_peak
        ){
            peak_am++;
            is_peak = false;
            continue;
        }

        //Останній пик
        if( is_peak && ( ( i + 1 ) == a_sz))
            peak_am++;
    }

    return peak_am;
}

int laba7()
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
