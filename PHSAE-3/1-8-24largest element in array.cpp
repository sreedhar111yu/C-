#include<bits/stdc++.h>
using namespace std;

int largestelement(vector<int>arr){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    return arr[n-1];
}

int main(){
    int size;
    cin>>size;
    vector<int>arr(size);
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    largestelement(arr);
    
}