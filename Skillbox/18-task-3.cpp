/*Задача 3
Что нужно сделать
Напишите рекурсивную функцию, которая принимает большое число n типа long long и 
переменную ans, а возвращает void. После завершения работы функции в переменной ans 
должно оказаться количество чётных цифр в записи числа n. 

Пример:

int ans;

evendigits(9 223 372 036 854 775 806, ans);

//ans == 10

Пояснение: 9 223 372 036 854 775 806

Чек-лист для проверки задачи

Функция принимает корректные типы данных, тип возвращаемого значения —  void.
Функция не использует библиотек кроме <iostream>.
Функция рекурсивная.
Функция содержит параметр по ссылке.*/

#include <iostream>

void evendigits(long long bigNum, int &answerEven)
{
    if (bigNum == 0) // 
    {
        return;
    }

    int digits = bigNum % 10; // Получаю последнее цифру числа
    
    if (digits % 2 == 0)
    {
        answerEven++;
    }

    evendigits(bigNum/10, answerEven);
    std::cout << "Четных чисел в " << bigNum << " = " << answerEven << std::endl;
}

int main() 
{
    long long bigNum;
    std::cout << "Enter the big number: ";
    std::cin >> bigNum;

    int answer = 0; // Для хранения кол-ва четных чисел

    evendigits(bigNum, answer);
     
}