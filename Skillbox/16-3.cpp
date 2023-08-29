/*Задание 3. Калькулятор
Что нужно сделать
Создайте небольшую программу для вычисления простых действий с числами.
При запуске программа ожидает пользовательского ввода во временную переменную строку.
После ввода строки она распарсивается на отдельные члены. Строка записывается в форме
“<число-1><действие><число-2>” (без пробелов). Оба числа — это значения с плавающей
точкой, повышенной точности (double). Действие может быть одним из: +, −, /, *.
Результат действия выводится в стандартный вывод cout.

Рекомендации
Чтобы разделить полученную строку на отдельные элементы — числа и оператор,
воспользуйтесь строковым потоком. Для этого создайте пустую строку std::string buffer
и дайте пользователю возможность при помощи std::cin ввести в неё команду. Затем оберните
полученную строку так: std::stringstream buffer_stream(buffer); Это позволит вам  получить
каждый из трёх компонентов команды: buffer_stream >> a >> operation >> b;*/

#include <iostream>
#include <sstream>
#include <limits> // Для очистки входного буфера

int main()
{
  double a, b;
  char operation;

  while (true)
  {
    std::string buffer;
    std::cout << "Enter an expression in format <number-1><operation><number-2> Action can be one of: (+, −, /, *): ";
    std::cin >> buffer;

    // пользователь выходит из цикла
    if (buffer == "exit")
    {
      std::cout << "Exiting the calculator" << std::endl;
      break;
    }

    std::stringstream buffer_stream(buffer); // Создание потока для разбора введенной строки

    // Проверка, успешно ли было чтение чисел и оператора из потока
    if (!(buffer_stream >> a >> operation >> b))
    {
      std::cerr << "Error: Invalid input format." << std::endl;

      // Очищаем входной буфер от некорректных данных
      std::cin.clear();                                                   // Сбрасываем флаги ошибок в потоке ввода
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Пропускаем все символы до символа новой строки

      continue; // Продолжаем цикл, чтобы запросить правильный ввод
    }

    double result;

    switch (operation)
    {
    case '+':
      result = a + b;
      break;

    case '-':
      result = a - b;
      break;

    case '*':
      result = a * b;
      break;

    case '/':
      // проверка деления на ноль
      if (b != 0)
      {
        result = a / b;
      }
      else
      {
        std::cerr << "Error: Division by zero" << std::endl;
        continue; // Переходим к следующей итерации цикла
      }
      break;

      // нет верного символа-оператора
    default:
      std::cerr << "Error: Wrong action" << std::endl;
      return 1;
      break;
    }

    std::cout << a << " " << operation << " " << b << " = " << result << std::endl;
  }

  return 0;
}
