#include <cstdlib>
#include <iostream>

int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

int lcm(int a, int b) {
  return std::abs(a * b) / gcd(a, b);
}

int main() {
  int a, b;
  std::cout << "Enter two numbers: ";
  std::cin >> a >> b;

  std::cout << "Result: " << lcm(a, b) << std::endl;

  return 0;
}
