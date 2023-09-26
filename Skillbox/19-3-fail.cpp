#include <iostream>
#include <fstream>

int main()
{
    char buffer[20]; // 20 байт

    std::ifstream bank;// "C:\\cpp\\tutorial\\bank.txt"
    bank.open("C:\\cpp\\tutorial\\bank.txt", std::ios::binary);
    bank.read(buffer, sizeof(buffer));

    // for (int i = 0; i < 20; i++)
    // {
    //     std::cout << buffer[i];
    // }   

    buffer[19] = 0;
    std::cout << buffer << std::endl;
     bank.close();
}