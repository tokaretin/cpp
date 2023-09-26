#include <iostream>

int main()
{
    // // двигаю биты вправо >,
    unsigned char flag = 160;
    // std::cout << "flag = " << int(flag) << " двоичная запись 10100000" << std::endl; // 10100000 число 160
    // flag >>= 1;
    // std::cout << "flag >> 1 = " << int(flag) << " двоичная запись 01010000" << std::endl; // 01010000 число 80
    // flag >>= 1;
    // std::cout << "flag >> 1 = " << int(flag) << " двоичная запись 00101000" << std::endl; // 00101000 число 40
    // flag >>= 1;
    // std::cout << "flag >> 1 = " << int(flag) << " двоичная запись 00010100" << std::endl; // 00010100 число 20
    // flag >>= 1;
    // std::cout << "flag >> 1 = " << int(flag) << " двоичная запись 00001010" << std::endl; // 00001010 число 10
    // flag >>= 1;
    // std::cout << "flag >> 1 = " << int(flag) << " двоичная запись 00000101" << std::endl; // 00000101 число 5
    // flag >>= 1;
    // std::cout << "flag >> 1 = " << int(flag) << " двоичная запись 00000010" << std::endl; // 00000010 число 2
    // flag >>= 1;
    // std::cout << "flag >> 1 = " << int(flag) << " двоичная запись 00000001" << std::endl; // 00000001 число 1

    // std::cout << std::endl;

    // двигаю биты влево <<
    flag <<= 1;
    std::cout << "flag >> 1 = " << int(flag) << " двоичная запись 00000001" << std::endl; // 00000001 число 1
    flag <<= 1;
    std::cout << "flag >> 1 = " << int(flag) << " двоичная запись 00000010" << std::endl; // 00000010 число 2
    flag <<= 1;
    std::cout << "flag >> 1 = " << int(flag) << " двоичная запись 00000100" << std::endl; // 00000100 число 4
    flag <<= 1;
    std::cout << "flag >> 1 = " << int(flag) << " двоичная запись 00001000" << std::endl; // 00001000 число 8
    flag <<= 1;
    std::cout << "flag >> 1 = " << int(flag) << " двоичная запись 00010000" << std::endl; // 00010000 число 16
    flag <<= 1;
    std::cout << "flag >> 1 = " << int(flag) << " двоичная запись 00100000" << std::endl; // 00100000 число 32
    flag <<= 1;
    std::cout << "flag >> 1 = " << int(flag) << " двоичная запись 01000000" << std::endl; // 01000000 число 64
    flag <<= 1;
    std::cout << "flag >> 1 = " << int(flag) << " двоичная запись 10000000" << std::endl; // 10000000 число 128
}