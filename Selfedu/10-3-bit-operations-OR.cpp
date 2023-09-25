#include <iostream>

int main()
{
    unsigned char flag = 5; // двоичная запись 00000101 (число 5)
    unsigned char mask = 8; // двоичная запись 00001000 (число 8)
     
    flag |= mask; // двоичная запись 00001101 (число 13)

    std::cout << "flag = " << int(flag) << " двоичная запись 00001101" << std::endl;

    return 0;
}

  