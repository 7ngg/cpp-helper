#include <iostream>

int main()
{
    int size;
    double evenSum = 0;
    int evenCount = 0;

    std::cout << "Enter array size: ";
    std::cin >> size;

    int A[size];

    for (int i = 0; i < size; ++i)
    {
        printf("A[%d]: ", i);
        std::cin >> A[i];

        if (A[i] % 2 == 0)
        {
            evenCount += 1;
            evenSum += A[i];
        }
    }

    std::cout << "AVG: " << evenSum / evenCount << '\n';

    return 0;
}
