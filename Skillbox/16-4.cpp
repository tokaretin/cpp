/*Задание 4. Механическое пианино
Что нужно сделать
Создайте упрощённую модель механического пианино. Всего у данного пианино семь клавиш,
которые соответствуют семи нотам. Каждая клавиша кодируется уникальной битовой маской,
которая записывается в enum. В начале программы пользователь вводит мелодию. Ввод осуществляется
с помощью цифр на клавиатуре, от 1 до 7 включительно (от ноты до до ноты си). В результате
из чисел может быть составлена любая комбинация нот. К примеру 512 или 154. После ввода
комбинации вводится следующая. Всего таких комбинаций нот — 12. Как только все комбинации
были введены пользователем, мелодия проигрывается. Для этого каждая комбинация нот последовательно
выводится на экран. Однако на этот раз она печатается «красиво», то есть все ноты указываются
словами, а не цифрами. При этом слова разделяются пробелами.

Рекомендации
Для вычленения отдельных символов-цифр из строки с нотами используйте оператор индексации строки.
Для дальнейшей конвертации символа в строку используйте соответствующий конструктор.

Для простоты, чтобы из индекса ноты получить саму ноту-флаг из enum, используйте оператор сдвига.
 Общая формула такова: 1 << индекс ноты (начинается с нуля). К примеру, 1 << 0 — битовый флаг
 ноты до, 1 << 6 — битовая маска ноты си.

Перечисление, хранящее ноты, имеет вид:

enum note
{
    DO = 1,
    RE = 2,
    MI = 4,
    FA = 8,
    SOL = 16,
    LA = 32,
    SI = 64
};

Соответственно, когда мы проходим по всей мелодии и печатаем её на экран, очередную
комбинацию (аккорд) проверяем так:

if (notes & DO)
        {
            std::cout << "DO";
        }

Где notes — это целое число, один звук нашей мелодии. Она состоит из 12 звуков и имеет вид int melody[12];*/

#include <iostream>
#include <string>

enum note
{
    // C - до, D - ре, E - ми, F - фа, G - соль, A - ля, H - си
    C = 1,
    D = 2,
    E = 4,
    F = 8,
    G = 16,
    A = 32,
    H = 64
};

int main()
{
    const int accordMax = 12; // Максимальная длина комбинации
    const int maxCombination = 7;
    int melody[accordMax]; // Массив для хранения комбинаций нот

    // Ввод мелодии
    for (int i = 0; i < accordMax; i++)
    {
        std::cout << "Inter the note combination: " << i + 1 << ": ";
        std::cin >> melody[i];
    }

    // Воспороизведение мелодии
    for (int i = 0; i < accordMax; i++)
    {
        std::cout << "Accord " << i + 1 << ": ";

        if (melody[i] & C)
            std::cout << "C ";
        if (melody[i] & D)
            std::cout << "D ";
        if (melody[i] & E)
            std::cout << "E ";
        if (melody[i] & F)
            std::cout << "F ";
        if (melody[i] & G)
            std::cout << "G ";
        if (melody[i] & A)
            std::cout << "A ";
        if (melody[i] & H)
            std::cout << "H ";

        std::cout << std::endl;
    }

    return 0;
}
