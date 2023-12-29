#include <iostream>

int main()
{
    double a1, a2, a3, a4;
    std::cin >> a1 >> a2 >> a3 >> a4;

    a1 = a1 * a1;
    a2 = a2 * a2;
    a3 = a3 * a3;
    a4 = a4 * a4;

    double max = a1;
    if (max < a2) max = a2;
    if (max < a3) max = a3;
    if (max < a4) max = a4;

    std::cout << "Max: " << max << std::endl;

    return 0;
}
