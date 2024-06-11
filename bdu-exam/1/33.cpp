#include <iostream>

int main()
{
    int size, sum = 0;
    std::cout << "Enter array size: ";
    std::cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]: ", i);
        std::cin >> arr[i];
        if (i % 2 == 1 and arr[i] < 0) sum += arr[i];
    }

    std:: cout << "Result: " << sum << std::endl;

    return 0;
}
