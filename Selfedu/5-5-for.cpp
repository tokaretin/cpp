#include <iostream>

// таблица умножения
int main()
{
    int a = 5;
    int b = 10;
    
    
    for (int i = 1 ; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            int res = i * j;
            std::cout << i << " * " << j << " = " << res << std::endl;
        }
        std::cout << std::endl;
        
    }

    return 0; 
}