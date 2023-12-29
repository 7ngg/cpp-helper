#include <iostream>

int main()
{
    int num;
    bool flag = true;
    std::cin >> num;

    if (num == 2) flag = true;
    else
    {
        for (int i = 2; i < num / 2 + 1; i++)
        {
            if (num % i == 0)
            {
                flag = false;
                break;
            }
        }
    }

    if (flag) std::cout << "The num is prime" << std::endl;
    else std::cout << "The num is not prime" << std::endl;

    return 0;
}
