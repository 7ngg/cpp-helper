#include <iostream>

bool exists(int a, int b, int c) {
  if (a + b < c) return false;
  if (a + c < b) return false;
  if (b + c < a) return false;

  return true;
}

int main (int argc, char *argv[]) {
  int a, b, c;

  std::cin >> a >> b >> c;

  if (exists(a, b, c)) {
    std::cout << "Triangle does exist" << '\n';
  } else {
    std::cout << "Triangle does not exist" << '\n';
  }

  return 0;
}
