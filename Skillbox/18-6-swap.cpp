#include <iostream>

#define NEWSTR  std::cout << std::endl;

void swap (int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

}

// Алгоритм Евклида. Наибольший общий делитель.
int greatest_common_divisor (int a, int b)
{
    if(b>a) 
    {
        swap(a,b); // Если b больше a, меняем их местами.
    }

    if(a%b == 0) 
    {
        return b; // Если a делится на b нацело без остатка, то b является наибольшим общим делителем, возвращаем его.
    }
    else
    {
    return greatest_common_divisor(b, a%b); // Иначе вызываем рекурсивно функцию greatest_common_divisor с аргументами b и a % b.
    }

}

int main() 
{
    int a = 10;
    int b = 20;
    swap(a, b);
    std::cout << "swap " << a << " " << b;

    NEWSTR;

    // наибольший общий делитель двух чисел
    std::cout << "наибольший общий делитель двух чисел " << greatest_common_divisor(30, 90) << std::endl; // 30
    std::cout << "наибольший общий делитель двух чисел " << greatest_common_divisor(1024, 512) << std::endl; // 6
}   
