#include <iostream>

int main()
{
    int n, sum = 0;

    std::cout << "Enter matrix dimensions: ";
    std::cin >> n;

    int matrix[n][n];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("matrix[%d][%d]: ", i, j);
            std::cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < n; ++i)
    {
        sum += matrix[i][i];
    }

    std::cout << "Sum: " << sum << '\n';

    return 0;
}
