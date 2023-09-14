#include <iostream>

double ModulValue (double a, double b)
{
    double summ = 0;
    if (a < 0) a = a * (-1);
    if (b < 0) b = b * (-1);
              
    return summ += a + b;;
}

int main()
{
    double a, b;
    std::cout << "Input the number: ";
    std::cin >> a >> b;

    std::cout << ModulValue(a, b);

    // второй вариант
    /*
    double a, b, s = 0;
    std::cout << "Input the number: ";
    std::cin >> a >> b;

    a = std::abs(a);
    b = std::abs(b);
    s += a + b;
    std::cout << s;
    */
}


    
