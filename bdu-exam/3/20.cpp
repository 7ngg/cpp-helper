#include <iostream>

int sum(int x) {
  int last = x % 10;
  int first = x / 10;

  return last + first;
}

int main() {
  int num;
  std::cout << "Enter your num: ";
  std::cin >> num;

  std::cout << "Result: " << sum(num) << std::endl;

  return 0;
}
