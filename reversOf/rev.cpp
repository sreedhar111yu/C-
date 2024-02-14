#include <bits/stdc++.h>
using namespace std;

int main() {
    string name;
    cin >> name;
    
    int size = name.size();
    int i = 0, j = size - 1;

    while (i < j) {
        swap(name[i], name[j]);
        i++;
        j--;
    }

    cout  << name << endl;

    return 0;
}
