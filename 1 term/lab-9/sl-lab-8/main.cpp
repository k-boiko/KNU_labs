//Бойко Катерина
// К-13

#include <iostream>
#include "matrix.h"

using namespace std;

void m_init( int *arr, int m_sz ){
     for( int i = 0, n = 0; i < m_sz; i++ )
         for( int j = 0; j < m_sz; j++, n++)
              arr[i*m_sz+j] = n;
}

void m_out( int *arr, int m_sz ){
    for( int i = 0; i < m_sz; i++ ){
        for( int j = 0; j < m_sz; j++ ){
            if( arr[i*m_sz+j] < 10 )
                cout << " ";
            if( arr[i*m_sz+j] < 100 )
                cout << " ";
            cout << arr[i*m_sz+j] << " ";
        }
        cout << endl;
    }
}

int count_sum( int *arr, int m_sz ){
    int t_sz = m_sz / 2;
    int t_sum = 0;
    for( int i = t_sz - 1; i < m_sz; i++ )
        for ( int j = m_sz - i - 1; j < i + 1; j++ )
            t_sum += arr[i*m_sz+j];
    return t_sum;
}

int laba8()
{
    setlocale(LC_ALL, "Ukrainian");

    copyright();
    cout << "Завдання: За квадратною матрицею знайти суму її елементів, що розташовані у нижньому чверть-трикутнику;";
    cout << "Введіть, будь ласка розмір матриці(<" << max_arr_sz << "): ";

    int m_sz;
    cin >> m_sz;

    if( !cin.fail() && ( m_sz <= max_arr_sz ) ){
        int arr[m_sz][m_sz];
        m_init((int *)arr, m_sz);

        cout << "Задана матриця: " << endl;
        m_out((int *)arr, m_sz);

        int sum = count_sum((int *)arr, m_sz);
        cout << "Сума елементів у нижньому чверть-трикутнику: " << sum;
    }else
        cout << "За введених даних, обчислення неможливе.";

    return 0;
}
