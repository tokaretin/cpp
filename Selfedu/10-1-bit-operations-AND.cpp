#include <iostream>

int main()
{
    unsigned char flags = 5; // двоичная запись 00000101 (число 5)
    unsigned char mask = 4;  // двоичная запись 00000100 (число 4)

    unsigned char res = flags & mask;

    std::cout << "var = " << int(res) << " двоичная запись 00000100" << std::endl;

    if ((flags & mask) == mask)
        std::cout << "2-й бит включен"<< std::endl;
    else
        std::cout << "2-й бит выключен"<< std::endl;
    

    unsigned char flags2 = 13; // двоичная запись 00001101 (число 13)
    unsigned char mask2 = 5;   // двоичная запись 00000101 (число 5)

                                // &  flags2 = 13 двоичная запись 00001101 (число 13)
                                // ~  mask2       двоичная запись 11111010 (число 250)
                                //    flags2      двоичная запись 00001000 (число 8)
                               
    flags2 &= ~mask2;     // двоичная запись 00001000 (число 8)
    std::cout << int(flags2) << std::endl;

    return 0;
}