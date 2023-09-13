/*Задача 1.
Что нужно сделать:
Написать функцию, принимающую два указателя на int и меняет 
местами содержимое данных указателей.

Пример:

int a = 10;

int b = 20;

swap(&a, &b);

std::cout << a << “ “ << b;

// 20 10


Чек-лист для проверки задачи

Функция принимает корректные типы данных, тип возвращаемого 
значения -- void
Функция не использует библиотек кроме <iostream>
Функция меняет значения по указателям*/

#include <iostream>

void swap (int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    std::cout << "After an exchange" << std::endl; 
    std::cout << "1 number: " <<  *a << std::endl << 
                 "2 number: " <<  *b << std::endl;
}

int main() 
{
    int a, b;
    std::cout << "Enter two numbers and I will swap them:" << std::endl;
    std::cout << "Enter 1 number: ";
    std::cin >> a;
    std::cout << "Enter 2 number: ";
    std::cin >> b;
    swap(&a, &b);

    return 0;
    
}