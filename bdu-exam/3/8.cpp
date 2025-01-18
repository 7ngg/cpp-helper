#include <iostream>
#include <cmath>

double get_length(int r) {
  return 2 * M_PI * r;
}

int main (int argc, char *argv[]) {
  int r;
  std::cin >> r;

  std::cout << "Circle length: " << get_length(r) << '\n';
  
  return 0;
}
