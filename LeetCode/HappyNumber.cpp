/*
 * Problem          : Happy Number
 * Platform         : LeetCode #202
 * Difficulty       : Easy
 * Topic            : Hash Set / Math
 *
 * Approach         : Wrote a getSum() helper that computes
 *                    sum of squares of digits of a number.
 *                    Used a set to track numbers already seen.
 *                    If n reaches 1, it's a happy number.
 *                    If we see the same number twice, we're
 *                    in a cycle — return false.
 *
 * Time Complexity  : O(log n)
 * Space Complexity : O(log n)
 */

class Solution {
public:
    int getSum(int n) {
        int sum = 0;

        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }

        return sum;
    }

    bool isHappy(int n) {
        set<int> seen;

        while (n != 1 && seen.find(n) == seen.end()) {
            seen.insert(n);
            n = getSum(n);
        }

        return n == 1;
    }
};
