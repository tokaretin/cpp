#include <iostream>
#include <cstdio> 

// почему-то не работает std::spointf(speed_str, "%.1f", currentSpeed)
// за-то работает так sprintf_s (speed_str, "%.1f", currentSpeed);  - здесь библиотеку не использую #include <cstdio> 
int main()
{
    const double epsilon = 0.01; // дельта для сровнения с нулем
    double currentSpeed = 0.0; // инициализация текущей скорости авто
    char speed_str[10]; // создаем массив для хранения офтрматированной строки скорости

    do
    {
        double speedDelta; // переменная для храненеия введенной скорости пользователем
        std::cout << "Speed delta: "; // просим ввести скорость
        std::cin >> speedDelta; // пользователь вводит скорость

        currentSpeed += speedDelta;

        // проверка спидометра
        if (currentSpeed < 0)
        {
            currentSpeed = 0;
        }
        else if (currentSpeed > 150)
        {
            currentSpeed = 150;
        }

        // форматируем текущую скорсть в строку с одним знаком после десятичной точки
        std::sprintf(speed_str, "%.1f", currentSpeed);

        std::cout << "Speed: " << speed_str << std::endl; // отформатированная строка на экран

    } while (currentSpeed > epsilon); // продолжаем цикл пока ткущая скорость больше заданной

    return 0;
}
