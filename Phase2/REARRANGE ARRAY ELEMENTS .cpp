#include<bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    vector<int> pos;
    vector<int> nev;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) 
            pos.push_back(arr[i]);
        else
            nev.push_back(arr[i]);
    }

    for (int i = 0; i < size / 2; i++) {
        arr[2 * i] = nev[i];
        if (i == size / 2 - 1 && size % 2 == 1) {
            arr[2 * i + 1] = nev[size / 2];
        } else {
            arr[2 * i + 1] = pos[i];
        }
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}