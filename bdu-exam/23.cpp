#include <iostream>

int main()
{
    int size;
    bool flag = true;

    std::cout << "Enter array size: ";
    std::cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf_s("arr[%d]: ", i);
        std::cin >> arr[i];
    }

    double d = static_cast<double>(arr[1]) / arr[0];    // (double)arr[1] / arr[0];
    for (int i = 0; i < size - 1; i++)
    {
        if (static_cast<double>(arr[i + 1]) / arr[i] != d)
        {
            flag = false;
            break;
        }
    }

    if (flag) std::cout << "Statement is correct" << '\n';
    else std::cout << "Statement is incorrect" << '\n';

    return 0;
}
