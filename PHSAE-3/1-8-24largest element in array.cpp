#include <bits/stdc++.h>
using namespace std;

void largestelement(vector<int> arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end());
    cout << "Largest element: " << arr[n - 1] << endl;
    cout << "Smallest element: " << arr[0] << endl;
}

int main() {
    int size;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    largestelement(arr);

    return 0;
}
