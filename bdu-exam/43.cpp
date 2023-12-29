#include <iostream>

int main()
{
    int size;
    std::cout << "Enter array size: ";
    std::cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf_s("arr[%d]: ", i);
        std::cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        int index = i;
        while (index > 0 and arr[index - 1] > arr[index])
        {
            std::swap(arr[index - 1], arr[index]);
            index -= 1;
        }
    }

    int newSize = 1;
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] != arr[i + 1]) newSize += 1;
    }

    int result[newSize];
    for (int i = 0, j = 0; i < size - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            result[j] = arr[i];
            j += 1;
        }
    }
    result[newSize - 1] = arr[size - 1];

    for (int i = 0; i < newSize; i++)
        std::cout << result[i] << ' ';
    std::cout << std::endl;


    return 0;
}
