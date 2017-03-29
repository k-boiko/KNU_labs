//Бойко Катерина
//К-13

#ifndef LAB9_H_INCLUDED
#define LAB9_H_INCLUDED

/**
 * Функція для друку повідомлення з допомогою по використанню програми
 *
 * @param exe назва програми
 * @return нічого
 */
void how_to_use(char *exe);

/**
 * Функція для виклику відповідної лабораторної роботи
 *
 * @param arg номер лабораторної
 * @return int 1 якщо виконання було успішним, 0, якщо відбулась помилка
 */
int exec(int arg);

#endif // LAB9_H_INCLUDED
