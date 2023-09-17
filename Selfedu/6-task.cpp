#include <iostream>

#define NEWSTR std::cout << std::endl;
#define ENDL std::endl;

int main()
{
    NEWSTR;
    const int SIZE = 10;
    int arr[SIZE];

    int min = arr[0];
    for (int i = 0; i < SIZE; i++)
    {
        std::cout << "Enter the " << i + 1 << "th number: ";
        std::cin >> arr[i];

        if (arr[i] < 0)
            i--;

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    NEWSTR;
    std::cout << "The array that led the user: ";
    for (int i = 0; i < SIZE; i++)
    {
        std::cout << arr[i] << " ";
    }

    NEWSTR;
    std::cout << "Minimum value: " << min;
}