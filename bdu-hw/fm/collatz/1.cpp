#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int max = n;
    int count = 1;

    while (n > 1) {
        std::cout << n << ' ';

        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = n * 3 + 1;
        }

        count += 1;

        if (max < n) {
            max = n;
        }
    }

    std::cout
            << n << '\n'
            << "Max: " << max << '\n'
            << "Count: " << count << '\n';

    return 0;
}