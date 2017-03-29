//Бойко Катерина
// К-13

#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED

const int max_arr_sz = 20;

/**
 * Функція для отримання від користувача даних для подальшої роботи программи та запису їх у массив
 *
 * @param arr вказівник на двовимірний масив(матрицю), у який відбуватиметься запис натуральних чисел
 * @param m_sz розмір матриці
 * @return нічого
 */
void m_init(int *arr, int m_sz);

/**
 * Функція для друку на екрані матриці
 *
 * @param arr матриця
 * @param m_sz розмір матриці
 * @return нічого
 */
void m_out(int *arr, int m_sz);

/**
 * Функція для підрахунку суми елементів нижнього трикутника матриці
 *
 * @param arr вказівник на масив, що буде проаналізовано
 * @param arr_sz розмір матриці
 * @return int результат обчислень
 */
int count_sum(int *arr, int m_sz);

#endif // MATRIX_H_INCLUDED
