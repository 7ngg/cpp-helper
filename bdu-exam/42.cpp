#include <iostream>

int main()
{
    int aSize, bSize;

    std::cout << "Enter size of the first array: ";
    std::cin >> aSize;
    std::cout << "Enter size of the second array: ";
    std::cin >> bSize;

    int A[aSize], B[bSize];
    for (int i = 0; i < aSize; i++)
    {
        printf_s("A[%d]: ", i);
        std::cin >> A[i];
    }

    for (int i = 0; i < bSize; i++)
    {
        printf_s("B[%d]: ", i);
        std::cin >> B[i];
    }

    int result[aSize + bSize];
    for (int i = 0, j = 0, k = 0; i < aSize + bSize; i++)
    {
        if (A[j] <= B[k])
        {
            result[i] = A[j];
            j += 1;
        }
        else 
        {
            result[i] = B[k];
            k += 1;
        }
    }

    std::cout << "Result: ";
    for (int i = 0; i < aSize + bSize; i++)
    {
        std::cout << result[i] << ' ';
    }
    std::cout << std::endl;

    return 0;
}
