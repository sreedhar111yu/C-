#include <bits/stdc++.h>
using namespace std;

int main() {
    string name;
    cin >> name;
    int len = name.length();
    bool isPalindrome = true;

    for (int i = 0; i < len / 2; i++) {
        if (name[i] != name[len - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "palindrome";
    } else {
        cout << "not a palindrome";
    }

    return 0;
}
