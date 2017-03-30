### Лабораторна робота No 6

----
#### Умова: 
Написати програму, що за числовим масивом, що вводиться користувачем, знаходить
такі значення:

2) середнє арифметичне індексів усіх максимальних елементів та значення
максимального елементу;

----
#### Вимоги:
0. Див. Загальні вимоги.

1. У середовищі програмування створено проект, в який додано необхідні одиниці тран-
сляції з текстом програми. Програма успішно компілюється й будується виконуваний файл.

2. На початку роботи програми виводиться інформація щодо виконавця (за допомогою
функції з раніш розробленої статичної бібліотеки) та умова задачі.

3. Хід виконання програми відповідає такому алгоритму: повідомити інформацію щодо
виконавця та призначення програми, ввести вхідні дані, вивести задані вхідні дані та
табличку результатів або повідомити про некоректність вхідних даних. Відповідні частини
тексту програми розташовуються послідовно.

4. Програма складається зі статичної бібліотеки (виведення інформації про виконавця)
та ще якнайменш двох одиниць трансляції.

5. Функції роботи з масивом (ввести, вивести, обробити) зібрані в окрему одиницю
трансляцію, до якої створено заголовний файл.

6. Введення масиву реалізовано у вигляді функції, яка повертає з виклику як сам масив,
так й кількість його елементів.

7. Числовий масив вводиться користувачем. Користувач не знає скільки елементів
збирається ввести.

8. При введенні масиву робота з пам’яттю ведеться коректно (тобто контролюється
кількість введених елементів і чужа пам’ять не використовується).

9. Перевірка помилок консольного введення може бути відсутня.

10. Основна функціональність програми (обробка вже наявного масиву) реалізована у
вигляді окремої функції.

11. Наявна функція, що виводить масив. Виведення ведеться через кому, у кінці
послідовності значень, якщо вона непорожня ставиться крапка й виконується перехід на
новий рядок. За порожнього масиву друкується відповідне повідомлення й також
виконується перехід на новий рядок.

12. За потреби можуть бути наявні й інші власні функції, крім зазначених вище.

13. Підключення (#include) cpp-файлів не допускається.

14. Програма має передбачати обробку масивів довжини до 1000 елементів включно.