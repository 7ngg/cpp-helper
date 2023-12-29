#include <iostream>

int main()
{
    int size;
    int sum = 0, i;

    std::cout << "Enter array size: ";
    std::cin >> size;

    int arr[size];
    for (i = 0; i < size; i++)
    {
        printf_s("arr[%d]: ", i);
        std::cin >> arr[i];
    }

    i = 0;
    while (arr[i] > 0 and i < size)
    {
        sum += arr[i];
        i++;
    }
    std::cout << "Result: " << sum << '\n';

    return 0;
}
