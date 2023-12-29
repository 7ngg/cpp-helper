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

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] != arr[i + 1]) std::cout << arr[i] << ' '; 
    }
    std::cout << arr[size - 1] << std::endl;


    return 0;
}
