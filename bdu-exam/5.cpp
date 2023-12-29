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

    int max = a1;
    if (max < a2) max = a2;
    if (max < a3) max = a3;

    std::cout << "Max digit: " << max << std::endl;
}
