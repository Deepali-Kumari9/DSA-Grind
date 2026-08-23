```cpp
/*
    Problem: 312. Burst Balloons
    Platform: LeetCode

    Approach:
    - Add virtual balloons with value 1 at both ends.
    - Use interval DP.
    - dp[left][right] stores the maximum coins obtainable
      by bursting all balloons strictly between left and right.
    - For each interval, choose k as the LAST balloon to burst.
    - When k is burst last, the remaining boundary balloons are
      nums[left] and nums[right].

    Time Complexity: O(N^3)
    Space Complexity: O(N^2)
*/

class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int n = nums.size();

        // Add virtual balloons with value 1
        nums.insert(nums.begin(), 1);
        nums.push_back(1);

        vector<vector<int>> dp(n + 2, vector<int>(n + 2, 0));

        // len = length of the interval
        for (int len = 2; len < n + 2; len++) {
            for (int left = 0; left + len < n + 2; left++) {

                int right = left + len;

                // Choose k as the last balloon to burst
                for (int k = left + 1; k < right; k++) {
                    dp[left][right] = max(
                        dp[left][right],
                        dp[left][k] +
                        dp[k][right] +
                        nums[left] * nums[k] * nums[right]
                    );
                }
            }
        }

        return dp[0][n + 1];
    }
};
```

**GitHub file name:** `BurstBalloons.cpp`
