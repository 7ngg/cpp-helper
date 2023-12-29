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

    int max = A[0];
    int min = A[0];

    for (int i = 0; i < size; i++) {
        if (max < A[i]) max = A[i];
        if (min > A[i]) min = A[i];
    }

    std::cout << "Result: " << max - min << '\n';

    return 0;
}
