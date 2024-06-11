#include <cstdio>
#include <iostream>

int main()
{
    int size;
    bool isSymmetric = true;

    std::cout << "Enter array size: ";
    std::cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]: ", i);
        std::cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] != arr[size - 1 - i])
        {
            isSymmetric = false;
            break;
        }
    }

    if (isSymmetric) std::cout << "Array is symmetric" << '\n';
    else std::cout << "Array is not symmetric" << '\n';

    return 0;
}
