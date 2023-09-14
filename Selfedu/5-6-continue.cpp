#include <iostream>

// continue, break

int main()
{
    int value, sum = 0;
    int i = 0;

    do
    {
        std::cout << "Введите " << i + 1 << "-е число: ";
        std::cin >> value;

        if (value < 0)
        {
            std::cout << "Error. Вы ввели число меньше нуля!" << std::endl;
            continue;
        }
        else
        {
            sum += value;
            std::cout << "Вы ввели число " << value << " Сложенно = " << sum << std::endl;
            i++;
        }
    } while (i < 5);
    {
        std::cout << "Было сложенно 5 чисел. Ответ " << sum;
    }
}