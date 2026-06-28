/*
 * Problem    : 53. Maximum Subarray
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/maximum-subarray/
 *
 * Approach   : Kadane's Algorithm (Greedy / DP)
 *              - Initialize both currSum and maxSum to nums[0].
 *              - For each subsequent element, decide greedily:
 *                  currSum = max(nums[i], currSum + nums[i])
 *                  Either extend the existing subarray or start fresh from nums[i],
 *                  whichever gives a larger value.
 *              - Update maxSum at every step to track the global maximum.
 *              - This works because carrying a negative currSum into the next element
 *                can only hurt the result — so we reset when needed.
 *
 * Time  Complexity : O(n) — single pass through the array
 * Space Complexity : O(1) — only two variables maintained
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = nums[0];
        int maxSum  = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            currSum = max(nums[i], currSum + nums[i]);
            maxSum  = max(maxSum, currSum);
        }

        return maxSum;
    }
};
