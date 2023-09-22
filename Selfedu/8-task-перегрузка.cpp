#include <iostream>

int Parallelepiped_volume(int a, int b, int h)
{
    return a * b * h;
}

double Parallelepiped_volume(double a, double b, double h)
{
    return a * b * h;
}

int main()
{
    int a = 4, b = 4, h = 27;
    double ad = 4.3, bd = 4.3, hd = 27.21;

    int v_i = Parallelepiped_volume(a, b, h);
    double v_d = Parallelepiped_volume(ad, bd, hd);

    std::cout << v_i << " " << v_d;

    return 0;
}