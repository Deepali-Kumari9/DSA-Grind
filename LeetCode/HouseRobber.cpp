/*
    Problem: 198. House Robber
    Platform: LeetCode
    Language: C++17

    Approach:
    - Use Dynamic Programming where dp[i] represents the maximum amount
      that can be robbed from the first (i+1) houses.
    - For each house, there are two choices:
      1. Skip the current house → dp[i-1]
      2. Rob the current house → dp[i-2] + nums[i]
    - Store the maximum of these two choices.
    - The last DP value gives the maximum money that can be robbed.

    Time Complexity: O(N)
    Space Complexity: O(N)

    where:
    - N = Number of houses
*/

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        if (n == 1) {
            return nums[0];
        }

        vector<int> dp(n);

        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);

        for (int i = 2; i < n; i++) {
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
        }

        return dp[n - 1];
    }
};
