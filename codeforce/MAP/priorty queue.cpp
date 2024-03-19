#include<bits/stdc++.h>
using namespace std;
int main() {
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    priority_queue<int> pp;
    for (int i = 0; i < size; i++) {
        pp.push(arr[i]);
    }
    while (!pp.empty()) {
        cout << pp.top() << " ";
        pp.pop();
    }
    return 0;
}