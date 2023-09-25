#include <iostream>

int main()
{
    // // двигаю биты вправо >>
    // unsigned char flag = 255;
    // std::cout << "flag = " << int(flag) << std::endl; // 255
    // flag >>= 1;
    // std::cout << "flag >> 1 = " << int(flag) << std::endl; // 127
    // flag >>= 1;
    // std::cout << "flag >> 1 = " << int(flag) << std::endl; // 63
    // flag >>= 1;
    // std::cout << "flag >> 1 = " << int(flag) << std::endl; // 31
    // flag >>= 1;
    // std::cout << "flag >> 1 = " << int(flag) << std::endl; // 15
    // flag >>= 1;
    // std::cout << "flag >> 1 = " << int(flag) << std::endl; // 7
    // flag >>= 1;
    // std::cout << "flag >> 1 = " << int(flag) << std::endl; // 3
    // flag >>= 1;
    // std::cout << "flag >> 1 = " << int(flag) << std::endl; // 1

    // двигаю биты влево <<
    flag <<= 1;
    std::cout << "flag >> 1 = " << int(flag) << std::endl;
    flag <<= 1;
    std::cout << "flag >> 1 = " << int(flag) << std::endl;
    flag <<= 1;
    std::cout << "flag >> 1 = " << int(flag) << std::endl;
    flag <<= 1;
    std::cout << "flag >> 1 = " << int(flag) << std::endl;
    flag <<= 1;
    std::cout << "flag >> 1 = " << int(flag) << std::endl;
    flag <<= 1;
    std::cout << "flag >> 1 = " << int(flag) << std::endl;
    flag <<= 1;
    std::cout << "flag >> 1 = " << int(flag) << std::endl;
    flag <<= 1;
    std::cout << "flag >> 1 = " << int(flag) << std::endl;
}