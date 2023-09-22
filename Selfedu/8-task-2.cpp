#include <iostream>

int sumValue(int *arr, int size)
{
    if (size == 0)
        return 0;

    return sumValue(arr + 1, size - 1) + *arr;
}

int main()
{
    int arr[]{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arrq[]{64, 64};

    std::cout << "Sum of all values in the array: " << sumValue(arr, sizeof(arr) / sizeof(arr[0])) << std::endl;
    std::cout << "Sum of all values in the array: " << sumValue(arrq, sizeof(arrq) / sizeof(arrq[0]));

    return 0;
}
