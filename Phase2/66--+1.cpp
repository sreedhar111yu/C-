#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    
         if(arr[size-1]<=9){
         arr[size-1]++;
         
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";

    }
}