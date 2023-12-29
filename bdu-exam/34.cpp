#include <iostream>
#include <cmath>

// 1 - sin(x) + sin(x^2) - sin(x^3) + ... + sin(x^n)

int main()
{
    int n;
    double sum = 0;
    double node = 1;
    double x;

    std::cout << "Enter n: ";
    std::cin >> n;
    std::cout << "Enter x: ";
    std::cin >> x;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + pow(-1, i + 1) * node;
        std::cout << pow(-1, i + 1) * node << '\n';
        node = std::sin(pow(x, i));
    }

    std::cout << "Result: " << sum << std::endl;

    return 0;
}
