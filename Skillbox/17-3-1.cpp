#include <iostream> // Подключаем заголовочный файл iostream, который позволяет использовать ввод и вывод данных.

#define ENDL std::cout << std::endl; // Определяем макрос ENDL для удобства перевода строки.

void bigA(char* str) { // Объявляем функцию bigA, которая принимает указатель на строку.

    ENDL; // Вызываем макрос ENDL для перевода строки.

    std::cout << "After - "; // Выводим сообщение "After - ".
    for (int i = 0; *(str + i) != '\0'; i++) { // Цикл, перебирающий символы строки до достижения нулевого символа '\0'.
        std::cout << *(str + i); // Выводим текущий символ строки.
    }
    ENDL; // Переводим строку.

    std::cout << "Before - "; // Выводим сообщение "Before - ".
    for (int i = 0; *(str + i) != '\0'; i++) { // Еще один цикл по символам строки.
        if (*(str + i) == 'a') { // Проверяем, если текущий символ - 'a'.
            *(str + i) = 'A'; // Заменяем 'a' на 'A'.
        }
        std::cout << *(str + i); // Выводим текущий символ (возможно, измененный) строки.
    }
}

int main() {
    char str[] = "Please, fill out this application form!!!"; // Создаем строку str.
    bigA(str); // Вызываем функцию bigA и передаем в нее строку str.
}
