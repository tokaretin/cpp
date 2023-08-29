/*Сшиватель дробных чисел
Что нужно сделать
Напишите небольшую программу. Из целой и дробной частей числа, которые в
отдельности вводит пользователь, составьте новое число с плавающей точкой
(типа double) и выведите это число обратно в консоль для проверки.
Целая часть — это часть числа, которая находится до точки (запятой), дробная — после.

Рекомендации
Вам потребуется функция StringToDouble — std::stod. Она принимает на вход строку, содержащую в себе число.*/

#include <iostream>
#include <string>

int main()
{
    std::string integerPart, fractionalPart;
    for (;;)
    {
        std::cout << "Enter the integer part of the number: ";
        std::cin >> integerPart;

        std::cout << "Enter the fractional part of the number: ";
        std::cin >> fractionalPart;

        std::string fullNumberStr = integerPart + "." + fractionalPart;

        try
        {
            double fullNumber = std::stod(fullNumberStr);
            std::cout << "Compiled number: " << fullNumber << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << "Conversion error: " << e.what() << std::endl;
        }
    }
    return 0;
    
}
