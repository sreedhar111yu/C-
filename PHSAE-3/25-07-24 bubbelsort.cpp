#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;

    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}