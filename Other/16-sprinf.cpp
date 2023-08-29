#define _CRT_SECURE_NO_WARNINGS // Подавление предупреждений о небезопасных функциях

#include <cstdio>

int main() {
    char buffer[100];
    sprintf(buffer, "Hello, %s!", "world"); // Используется функция sprintf

    return 0;
}