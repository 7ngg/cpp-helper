#include <iostream>

int get_digits_count(int x) {
  int count = 0;

  while (x > 0) {
    count += 1;
    x /= 10;
  }

  return count;
}

int main() {
  int x;
  std::cin >> x;

  std::cout << "Digit count:" << get_digits_count(x);

  return 0;
}
