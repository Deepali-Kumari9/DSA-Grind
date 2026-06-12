/*
 * Problem          : Factorial Trailing Zeroes
 * Platform         : LeetCode #172
 * Difficulty       : Medium
 * Topic            : Math
 *
 * Approach         : Trailing zeroes come from factors of 10 = 2 * 5.
 *                    Since factors of 2 are always more than 5,
 *                    we only need to count factors of 5 in n!
 *                    Kept dividing n by 5 and adding to answer
 *                    to count multiples of 5, 25, 125 etc.
 *
 * Time Complexity  : O(log n)
 * Space Complexity : O(1)
 */

class Solution {
public:
    int trailingZeroes(int n) {
        int ans = 0;
        while (n > 0) {
            n /= 5;
            ans += n;
        }
        return ans;
    }
};
