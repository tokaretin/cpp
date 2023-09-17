#include <iostream>

#define CONST 10 // Определение макроса с именем CONST и значением 10.

int main()
{
    int matr[CONST][CONST];

    for (int i = 0; i < CONST; i++)
    {
        for (int j = 0; j < CONST; j++)
        {
            if (i == j)
                matr[i][j] = 1; // Условие: если i равно j, то устанавливаем 1 в i-й строке и j-м столбце (первая диагональ).
            else
                matr[i][j] = 0;         // В противном случае устанавливаем 0 (остальные элементы).
            matr[i][CONST - i - 1] = 1; // Устанавливаем 1 в i-й строке и CONST - i - 1 столбце (вторая диагональ).
            if (i < 1) matr[i][j] = 1;
        }
    }

    for (int i = 0; i < CONST; i++)
    {
        for (int j = 0; j < CONST; j++)
        {
            std::cout << matr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
