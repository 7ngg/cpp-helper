#include <iostream>

int main() {
  std::string str;
  std::cout << "Your string > ";
  std::getline(std::cin, str);

  for (auto i = str.end() - 1; i >= str.begin(); --i) {
    std::cout << *i << ' ';
  } 

  return 0;
}
