#include <iostream>

int main()
{
    int num;
    bool flag = false;

    std::cin >> num;

    while (num > 0)
    {
        if (num % 10 == 3)
        {
            flag = true;
            break;
        }

        num /= 10;
    }

    if (flag)
    {
        std::cout << "Digit '3' exists in the num" << std::endl;
    }
    else
    {
        std::cout << "Digit '3' does not exist in the num" << std::endl;
    }

    return 0;
}
