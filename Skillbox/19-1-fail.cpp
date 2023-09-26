#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream bank("C:\\cpp\\tutorial\\bank.txt"); // Открываем файл для чтения

    if (bank.is_open()) // Проверяем, успешно ли открыт файл
    {
        std::string line;
        while (std::getline(bank, line)) // Считываем строки из файла
        {
            std::cout << line << std::endl; // Выводим строки на экран
        }
        bank.close(); // Закрываем файл
    }
    else
    {
        std::cout << "Unable to open file." << std::endl;
    }

    return 0;
}
