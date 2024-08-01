#include <bits/stdc++.h>
using namespace std;

int largest(vector<int> arr) {
    int Max = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > Max) {
            Max = arr[i];
        }
    }
    return Max;
}

int main() {
    int size;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int maxElement = largest(arr);
    cout << "Largest element: " << maxElement << endl;

    return 0;
}
