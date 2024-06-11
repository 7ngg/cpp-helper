#include <iostream>

int main() {
    int result = 0;

    std::string s = "Aydan, privet! Ti loh.";

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '.' or s[i] == ',' or s[i] == ';' or s[i] == ':') {
            result += 1;
        }
    }

    std::cout << "Result: " << result << '\n';

    return 0;
}
