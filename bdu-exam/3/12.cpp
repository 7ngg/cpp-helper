
#include <cmath>
#include <iostream>

bool exists(double a, double b, double c) {
  if (a + b < c) return false;
  if (a + c < b) return false;
  if (b + c < a) return false;

  return true;
}

double get_area(double a, double b, double c) {
  double p = (a + b + c) / 2;

  return std::sqrt((p - a) + (p - b) + (p -c));
}

int main (int argc, char *argv[]) {
  double a, b, c;

  std::cin >> a >> b >> c;

  if (exists(a, b, c)) {
    std::cout << "Area: " << get_area(a, b, c) << '\n';
  } else {
    std::cout << "Triangle does not exist" << '\n';
  }

  return 0;
}
