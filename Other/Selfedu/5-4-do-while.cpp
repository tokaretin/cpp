#include <iostream>

int main()
{
    const int SECRET_CODE = 13;
    int inputCode;
    int i = 1; // счетчик попыток

    do
    {
        std::cout << "Введите код: ";
        std::cin >> inputCode;

        if (i >= 3)
        {
            std::cout << "Блокировка пароля" << std::endl;
            break;
        }

        if (inputCode != SECRET_CODE)
        {
            std::cout << "Повторите попытку" << std::endl;
            i++; // увеличил счетчик на 1
        }

    } while (inputCode != SECRET_CODE);

    if (inputCode == SECRET_CODE)
    {
        std::cout << "Вы ввели правельный код!" << std::endl;
    }
    return 0;
}