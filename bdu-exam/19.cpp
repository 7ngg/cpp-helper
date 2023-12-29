#include <iostream>

int main()
{
    int size;
    int count = 0, sum = 0;

    std::cout << "Enter array size: ";
    std::cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf_s("arr[%d]: ", i);
        std::cin >> arr[i];
    
        if (arr[i] % 9 == 0)
        {
            count += 1;
            sum += arr[i];
        }
    }

    std::cout << "Count: " << count << '\n' << "Sum: " << sum << std::endl;

    return 0;
}
