/*
 * Problem          : Excel Sheet Column Number
 * Platform         : LeetCode #171
 * Difficulty       : Easy
 * Topic            : Math / Strings
 *
 * Approach         : Treated column title as a base-26 number system.
 *                    For each character, multiplied current result
 *                    by 26 and added value of character (A=1, B=2...Z=26)
 *                    using ch - 'A' + 1.
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 */

class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long result = 0;

        for (char ch : columnTitle) {
            result = result * 26 + (ch - 'A' + 1);
        }

        return result;
    }
};
