#include <iostream>
#include <fstream>

int main()
{
    std::ifstream bank;
    bank.open("C:\\cpp\\tutorial\\bank.txt", std::ios::binary);
    double money;
    std::string currency;
    bank >> money >> currency;
    std::cout << money << " " << currency << std::endl;
    bank >> money >> currency;
    std::cout << money << " " << currency << std::endl;
    bank >> money >> currency;
    std::cout << money << " " << currency << std::endl;
    bank >> money;
    std::cout << money << std::endl;
    bank >> money;
    std::cout << money << std::endl;
    bank >> money;
    std::cout << money << std::endl;
    bank >> money;
    std::cout << money << std::endl;
    bank.close();

    return 0;
}