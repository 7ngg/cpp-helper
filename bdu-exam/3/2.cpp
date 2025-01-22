#include <iostream>

int get_max_digit(int x) {
  int max = x % 10;

  while (x > 0) {
    if (x % 10 > max) max = x % 10;
    x /= 10;
  }

  return max;
}

int main (int argc, char *argv[]) {
  int x;
  std::cin >> x;

  std::cout << "Max digit: " << get_max_digit(x) << '\n';
  
  return 0;
}
