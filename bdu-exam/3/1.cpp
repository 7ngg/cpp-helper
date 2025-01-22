#include <iostream>

int get_sum(int x) {
  int sum = 0;

  while (x > 0) {
    sum += x % 10;
    x /= 10;
  }

  return sum;
}

int main () {
  int x;
  std::cin >> x;

  std::cout << "Result: " << get_sum(x);
  
  return 0;
}
