#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int N = size;
        int sum = N * (N + 1) / 2;
        int arrSum = 0;
        for (int i = 0; i < size; i++) {
            arrSum += arr[i]; 
        }
        int missingNumber = sum - arrSum;
    cout << "Missing number: " << missingNumber << endl;

    return 0;
    

}