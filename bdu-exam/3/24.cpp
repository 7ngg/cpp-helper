#include <iostream>
#include <vector>

std::vector<int> divisors(int x) {
  std::vector<int> v{ 1 };

  for (int i = 2; i < x / 2 + 1; i++) {
    if (x % i == 0)
      v.push_back(i);
  }

  v.push_back(x);

  return v;
}

int main() {
  int num;
  std::cout << "Enter your number: ";
  std::cin >> num;

  auto res = divisors(num);
  std::cout << "Divisors of " << num << ": ";
  for (auto item : res) {
    std::cout << item << ' ';
  }

  return 0;
}
