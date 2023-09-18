/*Задача 1
Что нужно сделать
Напишите функцию swapvec, принимающую std::vector<int> и указатель на
массив переменных типа int (одного размера) и обменивающую значения этих массивов.

Пример:

std::vector<int> a = {1,2,3,4};

int b[] = {2,4,6,8};

swapvec(a,b);

for(int i = 0; i < 4; ++i)

   std::cout << a[i];

std::cout << std::endl;

for(int i = 0; i < 4; ++i)

   std::cout << b[i];


Вывод:

2468

1234

Чек-лист для проверки задачи

Функция принимает корректные типы данных, тип возвращаемого значения — void.
Функция не использует библиотек кроме <iostream> и <vector>.
Функция меняет значения между объектами.
Вектор передаётся по ссылке.*/

#include <iostream>
#include <vector>

#define NS std::cout << std::endl;

// Функция swapvec для обмена значениями между вектором a и массивом b
void swapvec(std::vector<int> &a, int *b, int size)
{
   for (int i = 0; i < size; i++)
   {
      int temp = a[i];
      a[i] = b[i];
      b[i] = temp;
   }
}

int main()
{
   std::cout << "Объявление вектора a и массива b и инициализация начальными значениями." << std::endl;
   std::vector<int> a = {1, 2, 3, 4};
   int b[] = {11, 22, 33, 44};

   std::cout << "вектор a = ";
   for (int i = 0; i < a.size(); i++)
   {
      std::cout << a[i] << " ";
   }

   NS;

   std::cout << "массив b = ";
   for (int i = 0; i < sizeof(b) / sizeof(b[0]); i++)
   {
      std::cout << b[i] << " ";
   }

   NS;
   NS;

   std::cout << "Функция swapvec для обмена значениями между вектором a и массивом b" << std::endl;
   swapvec(a, b, sizeof(b) / sizeof(b[0]));

   std::cout << "вектор a = ";
   for (int i = 0; i < a.size(); i++)
   {
      std::cout << a[i] << " ";
   }

   NS;

   std::cout << "массив b = ";
   for (int i = 0; i < sizeof(b) / sizeof(b[0]); i++)
   {
      std::cout << b[i] << " ";
   }

   return 0;
}
