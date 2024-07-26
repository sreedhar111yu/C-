#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, target;

    
    cout << "size ";
    cin >> n;

    vector<int> arr(n);

    
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    cout << "t";
    cin >> target;

    int left = 0, right = n - 1;
    int result = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            result = mid;
            break;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    
    if (result != -1) {
        cout <<"found"<< result << endl;
    } else {
        cout <<"not found"<< endl;
    }

    return 0;
}