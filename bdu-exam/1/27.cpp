#include <iostream>

int main()
{
    int size;

    int positiveCount = 0, negativeCount = 0, zerosCount = 0;

    std::cout << "Enter array size: ";
    std::cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]: ", i);
        std::cin >> arr[i];

        if (arr[i] > 0) positiveCount += 1;
        else if (arr[i] < 0) negativeCount += 1;
        else zerosCount += 1;
    }

    std::cout 
        << "Positive elements count: " << positiveCount << '\n'
        << "Negative elements count: " << negativeCount << '\n'
        << "Zeros count: " << zerosCount << '\n';

    return 0;
}
