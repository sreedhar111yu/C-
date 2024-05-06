#include<bits/stdc++.h>
using namespace std;

int majorityele(vector<int>nums){
    int var=nums[0];
    int count =1;
    for(int i=1;i<nums.size();i++){
        if(var==nums[i]){
            count ++;
        }
        else{
            count --;
        }
        if(count==0){
            var=nums[i];
            count=1;

        }
    }
    
    return var;
}
int main(){
    vector<int>nums={3,2,3};
    int res=majorityele(nums);
    cout<<res;
}
