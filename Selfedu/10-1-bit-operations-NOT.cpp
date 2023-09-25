#include <iostream>

int main()
{
    unsigned char var = 153; // двоичная запись 10011001 (число 153)
    unsigned char not_var = ~var; // двоичная запись 01100110 (число 102)
     
    std::cout << "var = " << int(var) << " двоичная запись 10011001" << std::endl;
    std::cout << "not_var = " << int(not_var) << " двоичная запись 01100110" << std::endl;

    return 0;
}