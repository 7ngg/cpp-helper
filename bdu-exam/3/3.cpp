#include <iostream>

int get_min_digit(int x) {
  int min = 9;

  while (x > 0) {
    if (x % 10 < min) min = x % 10;
    x /= 10;
  }

  return min;
}

int main (int argc, char *argv[]) {
  int x;
  std::cin >> x;

  std::cout << "Min digit: " << get_min_digit(x) << '\n';
  
  return 0;
}
