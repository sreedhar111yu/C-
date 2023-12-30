#include<bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cin >> size;
    int arr[size];

    // Input array elements
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Bubble Sort
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    // Output sorted array
    for(int i = 0; i < size; i++) {
       cout<<arr[i]<<" " ;
    }//Print the largest element in the array
     cout<<"the lagest element in the array is:"<< arr[size-1] << " ";

    return 0;
}
