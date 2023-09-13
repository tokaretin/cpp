#include <iostream>

#define E std::cout << std::endl

int main()
{
    E;
    // первый пример
    int i = 11;
    std::cout << "Адрес где лежит переменная i: " << &i;

    E;
    // второй пример
    i = 15;
    int* pi = &i;
    std::cout << "Разименовываем *pi и загружаем число (int* pi = &i;) 15: " << *pi << std::endl; // разименовать pi и загрузить число 15

    i = 100;
    std::cout << *pi << std::endl; // разименовать pi и загрузить число 100

    // третьий пример
    *pi = 28;
    std::cout << i << std::endl; // разименовать pi и загрузить число 28

    // четвертый пример
    int a = 10;   
    int b = 5;    
    int *pa = &a; // Создаем указатель на целое число pa и присваиваем ему адрес переменной a. Теперь pa указывает на a.
    pa = &b;      // Изменяем значение указателя pa, теперь он указывает на переменную b, а не на a.
    *pa = 20;     // Разыменовываем указатель pa и присваиваем значение 20 переменной, на которую он указывает, то есть переменной b.

    std::cout << a << " " << b << std::endl; // Выводим значения переменных a и b. Значение a остается равным 10, а значение b изменено на 20.
}