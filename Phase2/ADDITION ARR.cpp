#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int ans=0;
    for(int i=0;i<size;i++){
        ans +=arr[i];
   

    }
     cout<<ans;
   
}