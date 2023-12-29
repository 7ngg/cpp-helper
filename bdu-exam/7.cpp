#include <iostream>

int main()
{
    int x1, x2, x3, x4;
    std::cin >> x1 >> x2 >> x3 >> x4;

    int max = x1;
    if (max < x2) max = x2;
    if (max < x3) max = x3;
    if (max < x4) max = x4;

    std::cout << "Maximum: " << max << std::endl;

    return 0;
}
