#include <iostream>

int wordsCount(const std::string &str) {
  int count = 0;
  bool inWord = false;

  for (char ch : str) {
    if (ch != ' ' and !inWord) {
      count += 1;
      inWord = true;
    } else if (ch == ' ') {
      inWord = false;
    }
  }

  return count;
}

int main() {
  std::string str;
  std::cout << "Your string > ";
  std::getline(std::cin, str);

  std::cout << "Count - " << wordsCount(str);
}
