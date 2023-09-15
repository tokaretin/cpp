#include <iostream>
#include <vector>

#define NEWSTRING std::cout << std::endl;

void foo1(std::vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++) // Определяем функцию foo1, которая принимает ссылку на вектор целых чисел. 
    {
        std::cout << vec[i] << " "; // Выводим элемент массива из вектора.
        vec[i] *= 2;                // Умножаем элемент массива из вектора на 2.
        
    }
}

int main()
{
    std::vector<int> a{1, 2, 3, 4, 5, 6, 7}; // Создаем вектор и инициализируем его значениями.
    foo1(a);                           // Вызываем функцию foo1, передавая вектор a.

    NEWSTRING; 

    for (int i = 0; i < a.size(); i++)
    {
        std::cout << a[i] << " "; // Выводим элементы вектора а, после функции
    }

    return 0;
}