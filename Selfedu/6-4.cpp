#include <iostream>
int main()
{
    int arr[] = {6, 4, 1, 22, 44, 11, 23};

    // Рассчитываем размер массива (количество элементов) с помощью sizeof и делим на размер одного элемента.
    const int SIZE = sizeof(arr) / sizeof(arr[0]);

    // Начало внешнего цикла для алгоритма сортировки выбором.
    for (int i = 0; i < SIZE - 1; i++)
    {
        int min = arr[i]; // Инициализация переменной min значением текущего элемента.
        int pos = i;      // Инициализация переменной pos текущим индексом.

        // Начало внутреннего цикла для поиска минимального элемента среди оставшихся.
        for (int j = i + 1; j < SIZE; j++)
        {
            // Если текущий элемент меньше, чем min, обновляем min и pos.
            if (min > arr[j])
            {
                pos = j;
                min = arr[j];
            }
        }

        // Обмен значениями текущего элемента и минимального элемента.
        int temp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = temp;
    }

    // Вывод элементов массива после сортировки.
    for (int i = 0; i < SIZE; i++)
    {
        std::cout << arr[i] << " ";
    }

    return 0; // Возвращаем 0 для обозначения успешного завершения программы.
}
