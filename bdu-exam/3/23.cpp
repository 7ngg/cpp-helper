#include <iostream>

bool isPrime(int x) {
  if (x <= 1) return false;
  if (x == 2) return true; 

  for (int i = 2; i < x / 2 + 1; i++) {
    if (x % i == 0) return false;
  }

  return true;
}

int main() {
  int num;
  std::cout << "Enter your number: ";
  std::cin >> num;

  if (isPrime(num)) std::cout << num << " is prime" << std::endl;
  else std::cout << num << " is not prime" << std::endl;
}
