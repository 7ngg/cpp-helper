#include <iostream>

int get_zeros_count(int x) {
  int count = 0;

  while (x > 0) {
    if (x % 10 == 0) count += 1;
    x /= 10;
  }

  return count;
}

int main() {
  int x;
  std::cin >> x;
  
  std::cout << "Zeros count: " << get_zeros_count(x);

  return 0;
}
