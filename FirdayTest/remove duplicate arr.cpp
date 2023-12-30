#include<bits/stdc++.h>
using namespace std;
int main(){
   int arr[]={1,1,1,2,5,5,6,7,7};
   int size=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    for(int j=1;j<size;j++){
        if(arr[j]>arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    
    cout<<i;

}