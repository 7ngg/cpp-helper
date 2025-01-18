#include <iostream>
#include <cmath>

double get_area(int r) {
  return M_PI * r * r;
}

int main (int argc, char *argv[]) {
  int r;
  std::cin >> r;

  std::cout << "Circle area: " << get_area(r) << '\n';
  
  return 0;
}
