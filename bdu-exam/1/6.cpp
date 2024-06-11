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

    int min = a1;
    if (min > a2) min = a2;
    if (min > a3) min = a3;

    std::cout << "Min digit: " << min << std::endl;
}
