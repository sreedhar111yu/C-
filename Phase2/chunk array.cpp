#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int val;

    cin>>val;
    for(int i=0;i<size;i++){
        int ans=arr[i]/val;
        cout<<arr[i];

    }
    
}