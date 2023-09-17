#include <iostream>

int main()
{
    const int SIZE = 9;
    int arr[SIZE]{1, 2, 3, 5, 6, 7, 8, 9};

    for (int i = SIZE; i > 3; i--) // Перенос элементов массива с позиции 3 до конца на одну позицию вправо. Начиная сдвиг справа
    {
        arr[i] = arr[i - 1]; // Присваеваем последнему элементу в массиве пред последний элемент в массиве.
    }

    arr[3] = 4; // Установка элемента с индексом 3 в массиве в значение 4.

    // Вывод элементов массива arr на экран через пробел.
    for (int i = 0; i < SIZE; i++)
    {
        std::cout << arr[i] << " "; // arr[SIZE] {1, 2, 3, 4, 5, 6, 7, 8, 9};
    }

    std::cout << std::endl;

    for (int i = 5; i < SIZE; i++) // Цикл для удаления элемента и сдвига последующих элементов на одну позицию влево.
    {
        arr[i] = arr[i + 1]; // Присваивание элементу с индексом i значение элемента с индексом (i + 1), тем самым сдвигая элементы.
    }

    for (int i = 0; i < SIZE; i++) // Цикл для вывода элементов массива после удаления и сдвига.
    {
        std::cout << arr[i] << " "; // Вывод элемента массива и пробела после него. arr[SIZE] {1, 2, 3, 4, 6, 7, 8, 9, 0};
    }

    return 0; // Возвращение 0, обозначающее успешное завершение программы.
}
