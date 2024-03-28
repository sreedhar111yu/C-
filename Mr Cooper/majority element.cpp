#include<bits/stdc++.h>
using namespace std;

int majorityele(vector<int> &arr){
    int size = arr.size();
    int N = arr[0];
    int count = 1;

    for(int i = 1; i < size; i++) { 
        if(arr[i] == N) {
            count++;
        } else {
            count--;
        }
        if(count == 0) {
            N = arr[i];
            count = 1; 
        }
    }
    return N;
}

int main() {
    int size;
    cin >> size;
    
    vector<int> arr(size);
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int res = majorityele(arr);
    if(res != -1) {
        cout << "Majority element is: " << res << endl;
    } else {
        cout << "No majority element found." << endl;
    }
    return 0;
}
