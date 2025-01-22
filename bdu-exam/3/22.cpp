#include <iostream>

struct Result {
  int EvenSum;
  int OddSum;

  Result(int evenSum, int oddSum) : EvenSum(evenSum), OddSum(oddSum) {}
};

Result sum(int x) {
  int evenSum = 0;
  int oddSum = 0;

  while (x > 0) {
    int last = x % 10;

    if (last % 2 == 0)
      evenSum += last;
    else
      oddSum += last;

    x /= 10;
  }

  return Result(evenSum, oddSum);
}

int main() {
  int num;
  std::cout << "Enter your number: ";
  std::cin >> num;

  Result res = sum(num);

  std::cout << "Even sum: " << res.EvenSum << '\t' << "Odd sum: " << res.OddSum
            << std::endl;
}
