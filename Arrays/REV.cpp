#include<bits/stdc++.h>
using namespace std;
int main (){
    int arr1[]={1,2,3,4,5,6};
    int arr2[]={2,1,5,7,9,8};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    for(int i=size1-1;i>=0;i--){
    cout<<arr1[i]<<" ";
    }
    for(int j=size2-1;j>0;j--){
        cout<<arr2[j]<<" ";
    }
}