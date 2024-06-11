#include <iostream>

int main()
{
    int num;
    std::cin >> num;

    int a1 = num % 10;
    num /= 10;
    int a2 = num % 10;
    num /= 10;
    int a3 = num % 10;

    if (a1 != a2 and a1 != a3 and a2 != a3)
    {
        std::cout << "Statement is correct" << std::endl;
    }
    else 
    {
        std::cout << "Statement is incorrect" << std::endl;
    }

    return 0;
}
