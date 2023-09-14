#include <iostream>

int main()
{
    int s = 0;
    int i = 1;

    while (i <= 10 && i != 0)
    {
        s += i;
        i++;
        std::cout << i << std::endl;
    }

    std::cout << std::endl;

    std::cout << s << std::endl;

    return 0;
}