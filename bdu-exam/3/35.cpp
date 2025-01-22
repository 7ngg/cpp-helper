#include <iostream>

bool isPalidrome(const std::string &str) {
  size_t length = str.length();
  for (size_t i = 0; i < length / 2; i++) {
    if (str[i] != str[length - 1 - i]) {
      return false;
    }
  }

  return true;
}

int main () {
  std::string str;
  std::cout << "Your string > ";
  std::getline(std::cin, str);

  if (isPalidrome(str)) std::cout << "String is a palidrome" << '\n';
  else std::cout << "String is not a palidrome" << '\n';

  return 0;
}
