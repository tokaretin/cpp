#include <iostream>
#include <cstdlib> // Для функции std::atoi
#include <string>

int main() {
    std::string integerPartStr, fractionalPartStr;
    
    // Ввод целой части числа
    std::cout << "Enter the integer part of the number: ";
    std::cin >> integerPartStr;

    // Ввод дробной части числа
    std::cout << "Enter the fractional part of the number: ";
    std::cin >> fractionalPartStr;

    // Преобразование строк в целочисленные значения
    int integerPart = std::atoi(integerPartStr.c_str());
    int fractionalPart = std::atoi(fractionalPartStr.c_str());

    // Объединение целой и дробной частей в одно целое число
    int combinedNumber = integerPart * 10 + fractionalPart;

    // Вывод полученного числа
    std::cout << "Составленное число: " << combinedNumber << std::endl;

    return 0;
}