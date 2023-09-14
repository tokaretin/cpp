
#include <iostream>

#define TEN 10

int main() {
    int num[10];
    
    // заполняю значениями массив
    std::cout << "Введите 10 чисел:\n";
    for (int i = 0; i < TEN; i++) {
        std::cout << "Enter the number: ";
        std::cin >> num[i];
    }
    
    // Находим минимальное значение в массиве
    int minNum = num[0];
    for (int i = 1; i < TEN; i++) {
        if (num[i] < minNum) 
            minNum = num[i];
    }

    // Вывод всего массива
    for (int i = 0; i < TEN; i++)
    {
        std::cout << num[i] << " ";
    }
    
    // Выводим наименьшее значение
    std::cout << "Наименьшее число: " << minNum << std::endl;
    
    return 0;
}
