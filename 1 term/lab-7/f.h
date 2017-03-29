//Бойко Катерина
// К-13

#ifndef F_H_INCLUDED
#define F_H_INCLUDED

const int max_arr_sz = 100;

/**
 * Функція для отримання від користувача даних для подальшої роботи программи та запису їх у массив
 *
 * @param arr масив, у який відбуватиметься запис чисел, введених користувачем
 * @param i адреса змінної що позначає розмір массиву
 * @return нічого
 */
void arr_in(double arr[], int &i);

/**
 * Функція для друку на екрані массиву
 *
 * @param arr масив чисел, введених користувачем
 * @param a_sz розмір массиву
 * @return нічого
 */
void arr_out(double arr[], int a_sz);

/**
 * Функція для пошуку та підрахунку "пиків" у масиві
 *
 * @param arr масив, що буде проаналізовано
 * @param arr_sz розмір массиву
 * @return int кількість пиків
 */
int calculate(double arr[], int a_sz);

#endif // F_H_INCLUDED
