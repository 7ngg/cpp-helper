
#include <iostream>

int get_sevens_count(int x) {
  int count = 0;

  while (x > 0) {
    if (x % 10 == 7) count += 1;
    x /= 10;
  }

  return count;
}

int main() {
  int x;
  std::cin >> x;
  
  std::cout << "Sevens count: " << get_sevens_count(x);

  return 0;
}
