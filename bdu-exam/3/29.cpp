#include <iostream>
#include <math.h>

double area(double r) {
  return 4 * M_PI * r * r;
}

int main() {
  double r;
  std::cout << "Enter radius > ";
  std::cin >> r;

  std::cout << "Result: " << area(r) << std::endl;

  return 0;
}
