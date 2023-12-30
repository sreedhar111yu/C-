#include<bits/stdc++.h>
using namespace std;

void SelectionSort() {
    int size;
    cin >> size;
    int arr[size];
    
    // Input array elements
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Selection sort
    for(int i = 0; i <= size-2; i++) {
        int minidx = i;

        for(int j = i + 1; j <= size - 1; j++) {
            if(arr[minidx] > arr[j]) {
                minidx = j;
            }
        }

        if(minidx != i) {
            swap(arr[minidx], arr[i]);
        }
    }

    // Output sorted array
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    SelectionSort();
    return 0;
}