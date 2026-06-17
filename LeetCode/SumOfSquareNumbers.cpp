/*
 * Problem          : Sum of Square Numbers
 * Platform         : LeetCode #633
 * Difficulty       : Medium
 * Topic            : Math / Two Pointers
 *
 * Approach         : Used two pointer approach.
 *                    Left starts at 0, right starts at sqrt(c).
 *                    Computed sum = left*left + right*right.
 *                    If sum == c return true.
 *                    If sum < c, increment left.
 *                    If sum > c, decrement right.
 *
 * Time Complexity  : O(sqrt(c))
 * Space Complexity : O(1)
 */

class Solution {
public:
    bool judgeSquareSum(int c) {
        long long left = 0;
        long long right = sqrt(c);

        while (left <= right) {
            long long sum = left * left + right * right;

            if (sum == c)
                return true;
            else if (sum < c)
                left++;
            else
                right--;
        }

        return false;
    }
};
