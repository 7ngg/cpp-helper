#include <iostream>

int main()
{
    int size, i;
    int firstNegativeIndex = -1, lastNegativeIndex = -1;

    std::cout << "Enter array size: ";
    std::cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf_s("arr[%d]: ", i);
        std::cin >> arr[i];
    }

    for (i = 0; i < size; i++)
        if (arr[i] < 0) lastNegativeIndex = i;

    for (i = 0; i < size; i++)
    {
        if (arr[i] < 0) 
        {
            firstNegativeIndex = i;
            break;
        }
    }

    std::cout 
        << "First negative element: " << firstNegativeIndex << '\n'
        << "Last negative element: " << lastNegativeIndex << '\n';

    return 0;
}
