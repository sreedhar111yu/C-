#include<bits/stdc++.h>
using namespace std;
int main(){
    int  n=5;
    int arr[]={5,4,3,2,1};
    for(int i=0;i<=n-2;++i){
        arr[i]=arr[i]*arr[i+1];
        cout<<arr[i]<<" ";
    }

}