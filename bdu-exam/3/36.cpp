#include <iostream>

int main() {
  double a, b, c;
  std::cout << "Enter numbers: ";
  std::cin >> a >> b >> c;

  double min = a, max = a, avg;

  if (b < min) 
    min = b;
  if (c < min) 
    min = c;

  if (b > max) 
    max = b;
  if (c > max) 
    max = c;

  if (a != min && a != max)
    avg = a;
  else if (b != min && b != max)
    avg = b;
  else
    avg = c;

  std::cout << "Min: " << min << '\n'
            << "Avg: " << avg << '\n'
            << "Max: " << max << '\n';

  return 0;
}

