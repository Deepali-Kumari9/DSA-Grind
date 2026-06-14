/*
 * Problem          : Sign of the Product of an Array
 * Platform         : LeetCode #1822
 * Difficulty       : Easy
 * Topic            : Arrays / Math
 *
 * Approach         : No actual multiplication needed to avoid overflow.
 *                    If any element is 0, return 0 directly.
 *                    For each negative number, flip the sign.
 *                    Return final sign at the end.
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 */

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int sign = 1;

        for (int num : nums) {
            if (num == 0)
                return 0;

            if (num < 0)
                sign *= -1;
        }

        return sign;
    }
};
