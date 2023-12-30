#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int low=0,mid=0,high=size-1;
    while (mid<=high)
    {
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
                high--;
        }
    }
   

    
    
}