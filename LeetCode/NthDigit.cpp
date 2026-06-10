/*
 * Problem          : Nth Digit
 * Platform         : LeetCode #400
 * Topic            : Math
 *
 * Approach         : Counted digits block by block
 *                    (1-digit, 2-digit, 3-digit...).
 *                    Determined which block contains
 *                    the target digit, found the exact
 *                    number, then extracted the digit
 *                    using indexing.
 *
 * Time Complexity  : O(log n)
 * Space Complexity : O(1)
 */

class Solution {
public:
    int findNthDigit(int n) {
        long long len = 1;
        long long count = 9;
        long long start = 1;

        while (n > len * count) {
            n -= len * count;
            len++;
            count *= 10;
            start *= 10;
        }

        long long num = start + (n - 1) / len;

        string s = to_string(num);

        return s[(n - 1) % len] - '0';
    }
};
