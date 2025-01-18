#include <iostream>

int get_prelast_digit(int x) {
  return x % 100 / 10;
}

int main (int argc, char *argv[]) {
  int x;
  std::cin >> x;

  std::cout << "Prelast digit: " << get_prelast_digit(x);
  
  return 0;
}
