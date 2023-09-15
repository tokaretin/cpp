#include <iostream>
#include <string>

#define ENDL std::endl

void foo1(int i, float j, std::string str)
{
    std::cout << i << " " << j << " " << str << std::endl;
}

void foo2(int i, float j = 5.3, std::string str = "Hello")
{
    std::cout << i << " " << j << " " << str << std::endl;
}

// при объявлении нужно указать степень
int degree1(int num, int degree)
{
    int res = 1;
    for (int i = 0; i < degree; i++)
    {
        res *= num;
    }

    return res;
}

// не нужно указывать степень
int degree2(int num, int degree = 2)
{
    int res = 1;
    for (int i = 0; i < degree; i++)
    {
        res *= num;
    }

    return res;
}

int main()
{
    foo1(2, 32.2, "Hello world");
    foo2(23);
    foo2(23, 34.4, "skill");
    std::cout << degree1(4, 3) << ENDL;
    std::cout << degree2(5) << ENDL;
    std::cout << degree2(10) << ENDL;
}