#include <iostream>

int main()
{

    int size, i;
    int minIndex = 0;

    std::cout << "Enter array size: ";
    std::cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf_s("arr[%d]: ", i);
        std::cin >> arr[i];
    }

    for (i = 0; i < size; i++)
        if (arr[minIndex] > arr[i]) minIndex = i;

    for(i = 0; i < size; i++)
    {
        if (i != minIndex) std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;

    return 0;
}
