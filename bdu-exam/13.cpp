#include <iostream>

int main()
{
    int n;
    int result;

    std::cin >> n;

    while (n > 0)
    {
        result = result * 10 + n % 10;
        n /= 10;
    }

    std::cout << "Reversed num: " << result << std::endl;

    return 0;
}
