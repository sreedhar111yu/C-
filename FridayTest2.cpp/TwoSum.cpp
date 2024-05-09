#include<bits/stdc++.h>
using namespace std;

vector<int>twoSum(vector<int>nums,int target){
    unordered_map<int,int>mp;
    for(int i=0;i<nums.size();i++){
        int t=target-nums[i];
        if(mp.find(t)!=mp.end()){
            return{i,mp[t]};
        }
        mp[nums[i]]=i;
    }
    return{};
}

int main() {
    vector<int> nums = {2, 1, 5, 10, 7, 4}; // Provided array
    int target = 7; // Provided target value

    // Further processing...

    // Example usage of twoSum function with provided target value
    vector<int> indices = twoSum(nums, target);
    cout << "Indices of the two elements whose sum is equal to the target: ";
    for (int idx : indices) {
        cout << idx << " ";
    }
    cout << endl;
    
    return 0;
}