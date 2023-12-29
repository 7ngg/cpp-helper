#include <iostream>

int main()
{
    int N;
    int count = 0;
    std::cin >> N;

    if (N != 0)
    {
        while (N > 0)
        {
            count += 1;
            N /= 10;
        }
    }
    else
    {
        count = 1;
    }

    std::cout << "Count of digits in N: " << count << std::endl;

    return 0;
}
