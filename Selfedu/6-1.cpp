#include <iostream>

void lin(float arr[], int size, float k = 0.5, float b = 2)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = k * i + b;
    }
    
}

int main()
{
    const int SIZE = 100;
    float arr[SIZE];
    float k = 0.5f, b = 2;

    // убрал в функцию Lin()
    // for (int i = 0; i < 100; i++)
    // {
    //     arr[i] = k * i + b;
    // }
     
    lin(arr, SIZE, k, b);

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        std::cout << arr[i] << " | ";
    } 
}