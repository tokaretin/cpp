// Euclidean algorithms
// Код программы на C++(вычитание) :

// Включение заголовочного файла <iostream>, который содержит ввод и вывод стандартных потоков (std::cout и std::cin).
#include <iostream>

// Определение функции для вычисления наибольшего общего делителя по алгоритму Евклида с использованием вычитания.
int greatest_common_divisor(int A, int B)
{
    // Пока числа не равны друг другу.
    while (A != B)
    {
        // Если первое число больше второго, вычитаем второе из первого.
        if (A > B)
            A -= B;
        else
            B -= A;
    }
    // Возвращаем наибольший общий делитель.
    return A;
}

// Точка входа в программу.
int main()
{
    int a, b;
    
    std::cout << "Введите числа A и B: ";
    std::cin >> a >> b;

    // Вызов функции для нахождения наибольшего общего делителя и вывод его на экран.
    std::cout << "Наибольший общий делитель (" << a << ", " << b << ") = " << greatest_common_divisor(A, B);
    
    return 0;
}