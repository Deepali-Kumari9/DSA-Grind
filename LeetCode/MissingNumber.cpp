/*
 * Problem          : Missing Number
 * Platform         : LeetCode #268
 * Difficulty       : Easy
 * Topic            : Arrays / Math
 *
 * Approach         : Used Gauss summation formula.
 *                    Expected sum of [0,n] = n*(n+1)/2
 *                    Actual sum = sum of all elements in array
 *                    Missing number = expectedSum - actualSum
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 */

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int exp_Sum = n * (n + 1) / 2;
        int actual_Sum = 0;

        for (int num : nums) {
            actual_Sum += num;
        }

        return exp_Sum - actual_Sum;
    }
};
