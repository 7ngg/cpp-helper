#include <iostream>
#include <math.h>

double volume(double radius, double height) {
  return M_PI * radius * radius * height;
}

int main() {
  double r, height;

  std::cout << "Enter radius: ";
  std::cin >> r;

  std::cout << "Enter height: ";
  std::cin >> height;

  std::cout << "Volume: " << volume(r, height) << std::endl;

  return 0;
}
