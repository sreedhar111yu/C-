#include <iostream>
using namespace std;

void uppercas(char ch) {
    if (isupper(ch)) {
        cout << "upper";
    } else {
        cout << "not upper";
    }
}

int main() {
    char ch;
    cin >> ch;
    uppercas(ch);
    return 0;
}
