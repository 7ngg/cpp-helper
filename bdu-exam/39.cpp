#include <iostream>

int main()
{
    int size;
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
        int maxIndex = 0;
        for (int j = 0; j < size - i; j++)
        {
            if (arr[maxIndex] < arr[j])
            {
                maxIndex = j;
            }
        }
        std::swap(arr[maxIndex], arr[size - 1 - i]);
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;

    return 0;
}
