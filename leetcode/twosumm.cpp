#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int ,int> mp;
        int size = nums.size();
        for (int i = 0; i < size; ++i) {
            int t = target - nums[i];
            if (mp.find(t) != mp.end()) {
                return {i, mp[t]};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    Solution solution;
    
    
    vector<int> nums;
    int size;
    cout << "Enter the size of the vector: ";
    cin >> size;
    cout << "Enter " << size << " numbers separated by spaces: ";
    for (int i = 0; i < size; ++i) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    
   
    int target;
    cout << "Enter the target integer: ";
    cin >> target;

    
    vector<int> result = solution.twoSum(nums, target);


    if (!result.empty()) {
        cout << "Indices of the two numbers whose sum equals the target: ";
        for (int i : result) {
            cout << i << " ";
        }
        cout << endl;
    } else {
        cout << "No such pair exists." << endl;
    }

    return 0;
}
