#include<bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;

    int reversedNum = 0;
    while (num > 0) {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num = num / 10;
    }

    cout << reversedNum;

    return 0;
}
