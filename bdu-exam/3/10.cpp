#include <iostream>

int sum(int x) {
  int sum = 0;

  while (x > 0) {
    int last = x % 10;
    sum += last * last;

    x /= 10;
  }

  return sum;
}

int main (int argc, char *argv[]) {
  int x;
  std::cin >> x;

  std::cout << "Result: " << sum(x) << '\n';
  
  return 0;
}
