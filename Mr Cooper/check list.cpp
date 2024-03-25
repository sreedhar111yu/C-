#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> lt;
    
    int size;
    cin >> size;

    for (int i = 0; i < size; i++) {
        int num;
        cin >> num;
        lt.push_back(num);
    }

    bool allEven = true;
    for (int i : lt) {
        if (i % 2 != 0) {
            allEven = false;
            break;
        }
    }

    if (allEven)
        cout << "all odd ";
    else
        cout << "nil ";

    return 0;
}
