#include <cstdio>
#include <iostream>

using namespace std;

bool isPalindrome(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != s[s.size() - i - 1]) {
            return false;
        }    
    }

    return true;
} 

int main() {
    string s;

    getline(cin, s);
    
    if (isPalindrome(s)) std::cout << s << " is palindrome" << '\n';
    else std::cout << s << " is not palindrome" << '\n';
}
