#include <iostream>

bool Exists(int x, int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            return true;
        }
    }

    return false;
}


void PrintArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}


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

    int count = 0;
    for (int i = 0; i < aSize; i++)
    {
        if (Exists(A[i], B, bSize))
        {
            count += 1;
        }
    }

    int result[count];
    int k = 0;
    for (int i = 0; i < aSize; i++)
    {
        if (Exists(A[i], B, bSize))
        {
            result[k] = A[i];
            k += 1;
        }
    }
    PrintArray(result, count);

    return 0;
}
