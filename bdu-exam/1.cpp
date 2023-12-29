#include <iostream>

int main()
{
    int num;
    int sum = 0;
    std::cin >> num;

    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }

    std::cout << "Result: " << sum << std::endl;

    return 0;
}
