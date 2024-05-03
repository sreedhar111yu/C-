#include <bits/stdc++.h>
using namespace std;

bool arradd(vector<int>& arr, int target, int idx) {
    if (target == 0) {
        return true;
    }
    if (target < 0 || idx < 0) {
        return false;
    }
    return arradd(arr, target - arr[idx], idx - 1) || arradd(arr, target, idx - 1);
}

bool arrayaddition(vector<int> arr) {
    if (arr.size() < 2) {
        return false;
    }

    sort(arr.begin(), arr.end());
    int largest = arr.back();
    arr.pop_back();

    int sum = accumulate(arr.begin(), arr.end(), 0);

    if (sum < largest) {
        return false;
    }
    if (sum == largest) {
        return true;
    }
    return arradd(arr, largest, arr.size() - 1);
}

int main() {
    vector<int> ans = {4,6,23,10,1,3};
    cout << boolalpha << arrayaddition(ans) << endl;
    return 0;
}
