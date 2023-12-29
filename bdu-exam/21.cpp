#include <iostream>

int main()
{
    int size;
    int negativeMaxIndex, positiveMinIndex;

    std::cout << "Enter array size: ";
    std::cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]: ", i);
        std::cin >> arr[i];
        if (arr[i] > 0) positiveMinIndex = i;
        if (arr[i] < 0) negativeMaxIndex = i;
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0 and arr[positiveMinIndex] > arr[i]) positiveMinIndex = i;
        if (arr[i] < 0 and arr[negativeMaxIndex] < arr[i]) negativeMaxIndex = i;
    }

    std::swap(arr[positiveMinIndex], arr[negativeMaxIndex]);
    std::cout << "Result: " << '\n';
    for (int i = 0; i < size; i++) std::cout << arr[i] << ' ';

    return 0;
}
