#include <iostream>

int main()
{
    int size, positiveMinIndex;
    std::cout << "Enter array size: ";
    std::cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]: ", i);
        std::cin >> arr[i];
        if (arr[i] > 0) positiveMinIndex = i;
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0 and arr[positiveMinIndex] > arr[i]) positiveMinIndex = i;
    }

    std::cout << "Minimal element, that is positive: " << arr[positiveMinIndex] << '\n'; 

    return 0;
}
