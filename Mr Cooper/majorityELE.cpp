#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &arr) {
    int size = arr.size();
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > size / 2) {
            return arr[i];
        }
    }
    return -1;
}

int main() {
    int size;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int result = majorityElement(arr);
    if (result != -1) {
        cout << "Majority element: " << result << endl;
    } else {
        cout << "No majority element found." << endl;
    }

    return 0;
}
