#include <iostream>

int main()
{
    int num;
    int prod = 1;

    std::cin >> num;

    while (num > 0)
    {
        prod *= num % 10;
        num /= 10;
    }

    std::cout << "Result: " << prod << std::endl;
    

    return 0;
}
