#include <iostream>
#include <cmath>

int main()
{
    int n, x;
    double sum = 0;
    double node = 1;

    std::cout << "Enter n: ";
    std::cin >> n;
    std::cout << "Enter x: ";
    std::cin >> x;

    for (int i = 1; i <= n; i++)
    {
        sum += pow(-1, i + 1) * node;
        node = 1 / pow(x, i + 1);
    }

    std::cout << "Result: " << sum << std::endl;

    return 0;
}
