#include <iostream>

int main()
{
    double a,b;
    std::cout << "Введите 1-е число: ";
    std::cin >> a;
    std::cout << "Введите 2-е число: ";
    std::cin >> b;

    double t = 0;
    if((a+b) != 0)
    {
        t += 1 / (a+b);
        std::cout << t; 
    }
    else
    {
    std::cout << "Error";
    } 
}