
💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡
💥std::cout << std::boolalpha;  

/*std::boolalpha - это манипулятор потока в C++, который влияет на формат вывода логических (boolean)
значений в стандартный поток вывода std::cout. Когда манипулятор std::boolalpha установлен, 
логические значения будут выводиться как "true" или "false" (строковые значения), а не как числа (1 или 0).*/

// Пример:
#include <iostream>

int main() {
    bool myBool = true;
    
    std::cout << std::boolalpha;  // Устанавливаем формат вывода для логических значений как true/false
    std::cout << myBool << std::endl;  // Выводится "true"
    
    std::cout << std::noboolalpha;  // Сбрасываем формат вывода для логических значений
    std::cout << myBool << std::endl;  // Выводится "1" (как число)
    
    return 0;
}
/*В этом примере, после установки std::boolalpha, std::cout выводит значение myBool как "true", 
а не как "1". Это полезно, когда вам нужно читабельный текстовый вывод для логических значений.*/

💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡
💥#define ENDL std::endl
/*Директива препроцессора #define используется для создания макросов*/
// Используя макрос ENDL, можно более компактно вставлять std::endl в коде. 
// Например:
#include <iostream>

// Использование макроса может сделать код более читаемым
int main() {
    std::cout << "Привет, мир!" << ENDL; 
    return 0;
}

// 1.Определение константы:
💥#define MAX_VALUE 100

int main() {
    int value = MAX_VALUE;
    return 0;
}

// 2.Упрощение кода:
💥#define LOG(message) std::cout << message << std::endl

int main() {
    LOG("This is a log message");
    return 0;
}

// 3.Математические выражения:
💥#define SQUARE(x) ((x) * (x))

int main() {
    int side = 5;
    int area = SQUARE(side);  // Будет раскрыто как ((5) * (5))
    return 0;
}

// 4.Условные макросы:
💥#define DEBUG  // Раскомментируйте эту строку для включения режима отладки

int main() {
    #ifdef DEBUG
        std::cout << "Debug mode enabled" << std::endl;
    #endif
    return 0;
}

// 5.Конкатенация строк:
💥#define GREETING_PREFIX "Hello, "

int main() {
    std::cout << GREETING_PREFIX "world!" << std::endl;  // Будет раскрыто как "Hello, " "world!"
    return 0;
}

💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡

💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡

💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡💡
