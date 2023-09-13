#include <iostream>

// предпроцессор
#define EE std::cout << "Переход на новую строку" << std::endl
#define TWO 2
#define E std::endl

// функция площадь треугольника
double ss(int a, int b)
{
    return 0.5 * a * b;
}

int main()
{
    int h = 5;
    int s = 6;
    int a = TWO;

    std::cout << a << std::endl;
    std::cout << ss(h, s) << E;
    EE;

    double S = 0.0; // Инициализируем переменную S нулем

    S += 1.0 / 2;  // Добавляем 0.5
    S -= 1.0 / 4;  // 0.25
    S += 1.0 / 5;  // 0.2
    S -= 1.0 / 7;  // 0,142857
    S += 1.0 / 10; // 0.1
    std::cout << "Сумма S = " << S << E;

    EE;
    EE;
    EE;

    int x = TWO;

    std::cout << x << std::endl;
}
