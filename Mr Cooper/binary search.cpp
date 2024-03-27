#include<bits/stdc++.h>
using namespace std;

void BinarySearch(vector<int>arr,int left,int right,int mid,int k){
    left=0;
    right=arr.size()-1;

    while(left<=right){
        int mid =left+(left -right)/2;
        
        if(arr[mid]==k){
            return mid;
        }
        else{
            if(arr[mid<k]){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return ;
    }

}