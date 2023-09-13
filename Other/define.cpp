#include <iostream>

#define SQUARE // Комментируйте эту строку, чтобы использовать расчет площади

int main() {
#ifdef SQUARE // Если определена константа SQUARE
    double side = 5.0; // Длина стороны квадрата
    double area = side * side; // Площадь квадрата
    std::cout << "Площадь квадрата: " << area << std::endl;
#else // Если константа SQUARE не определена
    double side = 5.0; // Длина стороны квадрата
    double perimeter = 4 * side; // Периметр квадрата
    std::cout << "Периметр квадрата: " << perimeter << std::endl;
#endif

    return 0;
}