#include <iostream>

int main()
{
    int size, negativeMaxIndex;
    std::cout << "Enter array size: ";
    std::cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]: ", i);
        std::cin >> arr[i];
        if (arr[i] < 0) negativeMaxIndex = i;
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0 and arr[negativeMaxIndex] < arr[i])
        {
            negativeMaxIndex = i;
        }
    }

    std::cout << "Maximum element of the array, that is negative: " << arr[negativeMaxIndex] << std::endl;

    return 0;
}
