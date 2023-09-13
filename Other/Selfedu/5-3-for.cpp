#include <iostream> // Включаем заголовочный файл iostream, который содержит стандартные потоки ввода и вывода.

int main() // Объявляем функцию main, которая является точкой входа в программу.
{
    double a, b, c; // Объявляем три переменные с плавающей запятой двойной точности: a, b и c.

    std::cout << "Введите a: "; // Выводим текстовое сообщение на экран, запрашивая ввод значения a.
    std::cin >> a;              // Считываем введенное пользователем значение и сохраняем его в переменной a.

    std::cout << "Введите a: "; // Выводим текстовое сообщение на экран, запрашивая ввод значения b.
    std::cin >> b;              // Считываем введенное пользователем значение и сохраняем его в переменной b.

    for (double i = 0; i <= 1; i += 0.5) // Начинаем цикл, который будет выполняться три раза (i равно 0, 0.5 и 1).
    {
        c = a * i + b; // Вычисляем значение c как a * i + b.

        std::cout << c << std::endl; // Выводим значение c на экран с новой строки.
    }

    // std::cout << c; // Эта строка закомментирована и не выполняется.

    return 0; // Возвращаем ноль в качестве кода завершения программы.
}
