#include<bits/stdc++.h>
using namespace std;

int rob(vector<int> nums) {
    int size = nums.size();

    if (size <= 2) {
        return nums[0];
    }

    vector<int> dp(size);

    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);

    for (int i = 2; i < size; i++) {
        dp[i] = max(dp[i - 2] + nums[i], dp[i - 1]);
    }

    return dp[size - 1];
}

int main() {
    vector<int> nums = {1, 2, 3, 1};
    cout << rob(nums);
    return 0;
}
