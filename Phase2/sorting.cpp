#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {55, 88, 9, 12, 3, 98, 65};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Sorting the array using the sort function
    sort(arr, arr + size);

    // Printing the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}
