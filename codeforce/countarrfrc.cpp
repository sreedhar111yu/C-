#include <bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    unordered_map<int, int> mp; 
    for (int i = 0; i < size; i++) {
        mp[arr[i]]++;
    }
    for (const auto& pair : mp) {
        cout << pair.first << " occurs " << pair.second << " times" << endl;
    }
    return 0;
}
