/*Задача 3.
Что нужно сделать:
Написать функцию, которая принимает указатель на char, по которому лежит строка.

Функция должна возвращать true, если вторая строка является подстрокой первой.

Пример:

const char* a = "Hello world";
const char* b = "wor";
const char* c = "banana";
std::cout << substr(a,b) << " " << substr(a,c);
// true false
const-квалификатор

const является квалификатором типа, применяемым к переменным, значения которых нельзя изменять.

Например, если в коде написать:

const int a = 2;

то впоследствии значение переменной невозможно изменить, а запись вида

a = 3;

приведёт к ошибке компилятора.

Чек-лист для проверки задачи

Функция принимает корректные типы данных, тип возвращаемого значения -- bool
Функция не использует библиотек кроме <iostream> и <cstring> или другую для работы со строками
Функция корректно определяет, является ли вторая строка подстрокой первой*/

#include <iostream>

// Объявляем функцию substr, которая принимает два указателя на строки и возвращает логическое значение.
bool substr(const char* str, const char* substr) 
{
    if (*substr == '\0') 
    {
        // Если первый символ подстроки равен нулевому символу, это означает пустую подстроку, и функция всегда возвращает true.
        return true;
    }

    // пока не достигнут конец строки str.
    while (*str != '\0') {
        const char* str1 = str;
        const char* str2 = substr;

        // Вложенный цикл проверяет совпадение символов из строк str1 и str2, пока не достигнут конец одной из строк или символы совпадают.
        while (*str1 != '\0' && *str2 != '\0' && *str1 == *str2) {
            str1++;
            str2++;
        }

        // Если достигнут конец подстроки str2, то это означает, что подстрока substr найдена в строке str.
        if (*str2 == '\0') {
            return true;
        }

        str++;  // Увеличиваем указатель str для продолжения поиска подстроки в строке.
    }

    return false;  // Если после завершения цикла не найдено совпадение, функция возвращает false.
}

int main() {
    const char* hellowrld = "Hello world";
    const char* wor = "wor";
    const char* banana = "banana";
    const char* watermelon = "Watermelon";
    const char* empty = "";
    const char* apricot = "Apricot";
    const char* rme = "rme";
   
    bool res1 = substr(hellowrld, wor);   // true
    bool res2 = substr(hellowrld, banana); // false
    bool res3 = substr(watermelon,empty); // пустая подстрока всегда true
    bool res4 = substr(watermelon, apricot); // подстрока не совподает false
    bool res5 = substr(watermelon, rme); // подстрока имеет какую-то часть строки true
    
    std::cout << std::boolalpha;  // Устанавливаем формат вывода для логических значений как true/false вместо 1/0

    std::cout << "Hello world / wor: " << res1 << std::endl
            << "Hello world / banana: " << res2 << std::endl 
            << "Watermelon / Empty: " << res3 << std::endl
            << "Watermelon / Apricot: " << res4 << std::endl
            << "Watermelon / rme: " << res5;

    return 0;
}
