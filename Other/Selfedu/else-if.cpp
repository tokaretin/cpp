#include <iostream>

#define E std::endl

void ModulValue(int a)
{
    int res = a < 0 ? (a = a * (-1)) : a;
    std::cout << res << E;
}

int main()
{
    while (true)
    {

        int x;
        std::cout << "Input the number: " << E;
        std::cin >> x;

        ModulValue(x);
    }
}