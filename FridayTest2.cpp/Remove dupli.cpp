#include<bits/stdc++.h>
using namespace std;

int removeduplicate(vector<int>nums){
    set<int>st(nums.begin(),nums.end());

    nums.clear();
    for(int num:st){
        nums.push_back(num);
    }
    return nums.size();
}

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5}; // Example vector with duplicates
    
    // Call the removeDuplicates function to remove duplicates
    int newSize = removeduplicate(nums);
    
    // Display the vector after removing duplicates
    cout << "Vector after removing duplicates: ";
    for (int i = 0; i < newSize; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    return 0;
}