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

// Функция swapvec для обмена значениями между вектором a и массивом b
void swapvec(std::vector<int> &vec, int *arr, int sizeArr)
{
   for (int i = 0; i < sizeArr; i++)
   {
      int temp = vec[i];
      vec[i] = arr[i];
      arr[i] = temp;
   }
}

int main()
{
   //Объявление вектора vec и массива arr и инициализация начальными значениями.
   std::cout << "Declaring vector a and array b and initializing the initial values." << std::endl;
   std::vector<int> vec = {1, 2, 3, 4};
   int arr[] = {11, 22, 33, 44};

   std::cout << "vec = ";
   for (int i = 0; i < vec.size(); i++)
   {
      std::cout << vec[i] << " ";
   }

   std::cout << std::endl;

   std::cout << "arr = ";
   for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
   {
      std::cout << arr[i] << " ";
   }

   std::cout << std::endl;
   std::cout << std::endl;
   
   //Функция swapvec для обмена значениями между вектором vec и массивом arr
   std::cout << "Swapvec function for exchange of values between vector vec and array arr" << std::endl;
   swapvec(vec, arr, sizeof(arr) / sizeof(arr[0]));

   std::cout << "vec = ";
   for (int i = 0; i < vec.size(); i++)
   {
      std::cout << vec[i] << " ";
   }

   std::cout << std::endl;

   std::cout << "arr = ";
   for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
   {
      std::cout << arr[i] << " ";
   }

   return 0;
}