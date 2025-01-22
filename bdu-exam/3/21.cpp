#include <iostream>

int f(int x) {
  return x / 100 % 10;
}

int main() {
  int num;
  std::cout << "Enter your num: ";
  std::cin >> num;

  std::cout << "Result: " << f(num) << std::endl;

  return 0;
}
