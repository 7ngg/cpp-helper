#include <iostream>
#include <string>

int main() {
    std::string s = "  privet   vprive privet   ";
    int result = 0;
    bool inWord = false;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ') {
            if (!inWord) {
                result++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }

    std::cout << "Result: " << result << '\n';

    return 0;
}

