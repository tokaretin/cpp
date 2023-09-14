#include <iostream>

int main()
{
    int s = 0;
    int i = 1;

    while (i < 10 && i != 0)
    {
        std::cout << "Введите число: ";
        std::cin >> i;
        s += i;
    }

    std::cout << "Сумма введенных чисел = " << s;
}