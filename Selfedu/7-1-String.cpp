#include <iostream>
#include <cstring> // Использование библиотеки для добавления символов после объявления переменной а
#include <string>
#include <cstdio>

int main()
{
    char a[100];

    // Добавление символов после объявления переменой, переменой а
    strcpy_s(a, "Hello");   // привсвоение переменной Hello
    strcat_s(a, " world!"); // добавление к строке Hello слово world

    std::cout << "строка a = " << a  << std::endl;

    // Сколько символов в строке
    int N = strlen(a);
    std::cout << "Всего символов в строке = " << N << std::endl;

    
    // Сравнение строк
    char b[100];
    char str[100];
    strcpy_s(b, "Home are");

    //std::cin >> str; // будет работать только для пробела. К примеру Hello world. Запишет только Hello

    // чтобы все корректно работало нужно использовать функцию  gets_s
   // gets_s(str, 100);


    if(strcmp(b, str) == 0) std::cout << "Строки b И str равны"<< std::endl;
    else std::cout << "Строки b И str не равны" << std::endl;


    char name[100] = "Илья";
    char surname[100] = "Каретин";
    int age = 37;
    double weight = 100.2d;
    char strin[200];

    sprintf(strin, "Имя: %s\n Фамилия: %s\n Возраст: %d лет\n Вес: %.2f кг", name, surname, age, weight);
    std::cout << strin;

std::cout << std::endl;


    char str_1 [] = "100"; 
    char str_2 [] = "100.25";

    int i = atoi(str_1);
    double j = atof(str_2);

    std::cout << "i = " << i << " " << "\nj = " <<  j;
}