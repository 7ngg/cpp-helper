#include <iostream>

int main()
{

    int size;
    int count = 0;;;

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
        if (arr[i] != arr[size - 1]) count += 1;
    }
    
    std::cout << "Count of elements different from array's last element: " << count << std::endl;

    return 0;
}
