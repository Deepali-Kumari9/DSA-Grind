/*
 * Problem          : Reverse Integer
 * Platform         : LeetCode #7
 * Difficulty       : Medium
 * Topic            : Math
 *
 * Approach         : Reversed digits one by one using modulo
 *                    and division. Before adding each digit,
 *                    checked if ans would exceed INT_MAX or
 *                    go below INT_MIN to handle overflow.
 *                    If overflow detected, return 0.
 *                    No long long used.
 *
 * Time Complexity  : O(log n)
 * Space Complexity : O(1)
 */

class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while (x != 0) {
            int digit = x % 10;
            if (ans > INT_MAX / 10 ||
                (ans == INT_MAX / 10 && digit > 7))
                return 0;

            if (ans < INT_MIN / 10 ||
                (ans == INT_MIN / 10 && digit < -8))
                return 0;

            ans = ans * 10 + digit;
            x /= 10;
        }
        return ans;
    }
};
