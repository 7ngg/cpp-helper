#include <cstdio>
#include <iostream>

int main()
{
    int size;
    
    std::cout << "Enter array size: ";
    std::cin >> size;

    int A[size];

    for (int i = 0; i < size; ++i)
    {
        printf("A[%d]: ", i);
        std::cin >> A[i];
    }

    int maxIndex = 0;
    for (int i = 0; i < size; ++i)
    {
        if (A[maxIndex] < A[i]) maxIndex = i;
    }

    std::cout << "Max: " << A[maxIndex] << '\n' << "Max index: " << maxIndex << std::endl;

    return 0;
}
