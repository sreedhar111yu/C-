#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int maxprofit=0;
    
    for(int i=1;i<size;i++){
        if(arr[i]>arr[i-1]){
            maxprofit+=arr[i]-arr[i-1];
        }
    }
    cout<<maxprofit;
}