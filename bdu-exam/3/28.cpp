#include <cmath>
#include <iostream>

int main() {
  std::cout << "ax^2 + bx + c = 0" << std::endl;

  double a, b, c;

  std::cout << "Enter a b c: ";
  std::cin >> a >> b >> c;

  double D = b * b - 4 * a * c;

  if (D < 0) {
    std::cout << "No real roots exist" << '\n';
  } else if (D == 0) {
    double x = -b / 2 * a;
    std::cout << "There are two equal roots: " << x << '\n';
  } else {
    double x1 = (-b + std::sqrt(D)) / 2 * a;
    double x2 = (-b - std::sqrt(D)) / 2 * a;

    std::cout << "There are two real roots: " << x1 << '\t' << x2 << '\n';
  }

  return 0;
}
