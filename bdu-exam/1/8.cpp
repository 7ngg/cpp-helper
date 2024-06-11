#include <iostream>

int main()
{
    int num;
    bool flag = false;
    std::cin >> num;

    for (int i = 0; i < num; i++)
    {
        if (i * i == num) 
        {
            flag = true;
            break;
        }
    }

    if (flag)
    {
        std::cout << "Num is a proper square" << std::endl;
    }
    else
    {
        std::cout << "Num is not a proper square" << std::endl;
    }
}
