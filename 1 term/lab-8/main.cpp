//Бойко Катерина
// К-13


#include <iostream>
#include "matrix.h"
#include "copyright.h"

using namespace std;

int main()
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

