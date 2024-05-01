#include<bits/stdc++.h>
using namespace std;

void KTH(int arr[],int size,int k){
    if(k >0 &&k<=size){
        cout<<arr[k-1];
    }
    else{
        cout<<"invalid";
}
}
int main(){
    int arr[]={10,11,85,66,25,33};
    int size=sizeof(arr)/sizeof(arr[0]);
    int k=5;

    KTH(arr,size,k);
    return 0;
}