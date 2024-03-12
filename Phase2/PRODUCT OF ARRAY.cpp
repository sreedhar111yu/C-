#include<bits/stdc++.h>
using namespace std;
int main (){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int totalproduct=1;
    for(int i=0;i<size;i++){
        totalproduct*=arr[i];
    }

    for(int i = 0; i < size; i++) {
        int ans = totalproduct / arr[i];
        cout << ans << " ";
    }

}