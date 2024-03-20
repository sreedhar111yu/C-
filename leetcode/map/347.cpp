// class Solution {
// public:
//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         unordered_map<int,int>mp;
//         vector<int>ans;
//         int size=nums.size();

//         for(int i=0;i<size;i++){
//             mp[nums[i]]++;
//         }

//         priority_queue<pair<int,int>>pp;
//         for(auto ele:mp){
//             pp.push({ele.second,ele.first});
//         }
//         while(k!=0){
//             int val=pp.top().second;
//             ans.push_back(val);
//             pp.pop();
//             k--;
//         }
//         return ans;
        
//     }
// }