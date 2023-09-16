#include <iostream>

#define NEWSTRING std::cout << std::endl;
#define PRINT std::cout <<

int main()
{
    int i = 12;
    int &j = i;                     // Объявляем ссылку j на переменную i. Ссылка j и i теперь ссылаются на одну и ту же ячейку памяти.
    j = 20;                         // Изменяем значение, на которое ссылается j. Это также изменяет значение i, потому что они связаны.
    std::cout << "i = " << i << " " // Выводим значение переменной i на экран. Здесь значение будет 20, так как оно было изменено через j.
              << "j = " << j;       // Выводим значение переменной j на экран. Здесь значение будет 20, потому что они связаны c i

    NEWSTRING;

    int a = 15;
    const int &b = a;   // Объявляем константную ссылку b на переменную a. Ссылка b связана с переменной a.
    //b = 25;           // Пытаемся изменить значение переменной a. Однако, a остается неизменной, так как b - константная ссылка.
    std::cout << a;     // Выводим значение переменной a на экран. Значение осталось 15, так как a не была изменена.

    NEWSTRING;

    int c = 30;
    const int &d = c;      // Создаем константную ссылку d на переменную c
    c = 12;                // Меняем значение переменной c на 12.
    std::cout << d;        // Выводим значение переменной d. Поскольку d является константной ссылкой на c,
                           // она отобразит текущее значение c, которое теперь равно 12.
    NEWSTRING;             // это макрос, добавляющий перевод строки. std::cout << std::endl;
    PRINT &c << " " << &d; // Это макрос std::cout << Выводим адреса переменных c и d. Они лежат по одному адресу
}