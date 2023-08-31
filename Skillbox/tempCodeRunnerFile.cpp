#include <iostream>
// #include <string>

// enum note
// {
//     DO = 1,
//     RE = 2,
//     MI = 4,
//     FA = 8,
//     SOL = 16,
//     LA = 32,
//     SI = 64
// };

// int main()
// {
//     const int accordMax = 12; // Максимальная длина комбинации

//     int melody[accordMax]; // Массив для хранения комбинаций нот

//     // Ввод мелодии
//     for (int i = 0; i < accordMax; i++)
//     {
//         std::string accord = " ";
//         std::cout << "Inter the note combination: " << i + 1 << ": ";
//         std::cin >> accord;

//         melody[i] = 0; // Инициализация флагов нот

//         for (int j = 0; j < accord.size(); j++)
//         {
//             int noteValue = accord[j] - '0'; // Преобразование в числовое значание
            
//             if (noteValue >= 1 && noteValue <= 7)
//             {
//                 melody[i] |= 1 << (noteValue - 1); // Установка битовой маски для ноты
//             }
//             else
//             {
//                 std::cerr << "Wrong note. Enter a number from 1 to 7." << std::endl;
//             }
            
//         }
//     }

//     // Воспороизведение мелодии
//     for (int i = 0; i < accordMax; i++)
//     {
//         std::cout << "Accord " << i + 1 << ": ";

//         if (melody[i] & DO)
//             std::cout << "ДО ";
//         if (melody[i] & RE)
//             std::cout << "РЕ ";
//         if (melody[i] & MI)
//             std::cout << "МИ ";
//         if (melody[i] & FA)
//             std::cout << "ФА ";
//         if (melody[i] & SOL)
//             std::cout << "СОЛЬ ";
//         if (melody[i] & LA)
//             std::cout << "ЛЯ ";
//         if (melody[i] & SI)
//             std::cout << "СИ ";

//         std::cout << std::endl;
//     }

//     return 0;
// }