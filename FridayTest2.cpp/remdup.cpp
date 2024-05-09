#include<bits/stdc++.h>
using namespace std;

int dup(vector<int>nums){
    int i=0;
    for(int j=1;j<nums.size();j++){
        if(nums[j]>nums[i]){
            nums[i+1]=nums[j];
            i++;
        }
    }
    return i+1;
}

int main(){
    vector<int>nums={1,1,2,3,6,6,6,8,8,8,9,9};
    for(int i=0;i<dup(nums);i++){
        cout<<nums[i];
    }
}