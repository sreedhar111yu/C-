#include<bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int minprice = INT_MAX;
    int maxprofit = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] < minprice) {
            minprice = arr[i];
        } else {
            if (arr[i] - minprice > maxprofit) {
                maxprofit = arr[i] - minprice;
            }
        }
    }

    cout << maxprofit;

    return 0;
}
