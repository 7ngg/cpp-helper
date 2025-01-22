#include <iostream>

int main() {
  std::cout << "ax = b" << std::endl;
  
  double a, b;

  std::cout << "Enter a > ";
  std::cin >> a;

  std::cout << "Enter b > ";
  std::cin >> b;

  double x = b / a;

  std::cout << "x = " << x << std::endl;

  return 0;
}
