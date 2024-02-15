#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int j=0;j<2;j++){
        for(int i=0;i<size;i++){
            cout<<arr[i];
        }
    }
}