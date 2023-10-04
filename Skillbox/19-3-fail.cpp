#include <iostream>
#include <fstream>

int main()
{
    /*
    char buffer[20]; // 20 байт

    std::ifstream bank; // "C:\\cpp\\tutorial\\bank.txt"
    bank.open("C:\\cpp\\tutorial\\bank.txt", std::ios::binary);
    bank.read(buffer, sizeof(buffer)); // читает первые 20 байт
     bank.read(buffer, sizeof(buffer)); // читает вторые 20 байт
     bank.read(buffer, sizeof(buffer)); // читает третьи 20 байт

    // for (int i = 0; i < 20; i++) // в этом цикле мы читаем все 20 байт
    // {
    //     std::cout << buffer[i];
    // }

    buffer[19] = 0; // хдесь, когда мы присваеваем 0, то читаем 19 байт. 1 байт теряется
    std::cout << buffer << std::endl;
    bank.close();
    */



    // двигаться с любого места
   /*
    char buffer[20];

    std::ifstream bank;
    bank.open("C:\\cpp\\tutorial\\bank.txt", std::ios::binary);
    bank.seekg(0); // двигаться с любого места
    // bank.seekg(40); // двигаться с любого места
    // bank.seekg(60); // двигаться с любого места
    bank.read(buffer, sizeof(buffer));
    buffer[19] = 0;
    std::cout << buffer << std::endl;
    bank.close();
    */


    // Указать на любое место курсор
    char buffer[20];

    std::ifstream bank;
    bank.open("C:\\cpp\\tutorial\\bank.txt", std::ios::binary);
    bank.read(buffer, sizeof(buffer));
    std::cout << bank.tellg() << std::endl;


    bank.close();
}