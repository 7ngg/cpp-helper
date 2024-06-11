#include <iostream>

int main()
{
    int size;
    int numToFind;
    bool flag = false;

    std::cout << "Enter array size: ";
    std::cin >> size;

    std::cout << "Enter num to be found: ";
    std::cin >> numToFind;

    int A[size];

    for (int i = 0; i < size; ++i)
    {
        printf("A[%d]: ", i);
        std::cin >> A[i];
    }

    for (int i = 0; i < size; ++i)
    {
        if (A[i] == numToFind)
        {
            flag = true;
            break;
        }
    }

    if (flag) std::cout << numToFind << " exists in the array" << '\n';
    else std::cout << numToFind << " does not exist in the array" << '\n';
     

    return 0;
}
