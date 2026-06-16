/*
 * Problem          : Excel Sheet Column Title
 * Platform         : LeetCode #168
 * Difficulty       : Easy
 * Topic            : Math / Strings
 *
 * Approach         : Treated it like base-26 conversion.
 *                    Decremented columnNumber by 1 before
 *                    taking modulo to handle Z mapping to 26.
 *                    Built string in reverse using char arithmetic
 *                    then reversed it at the end.
 *
 * Time Complexity  : O(log n)
 * Space Complexity : O(log n)
 */

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans;
        while(columnNumber > 0) {
            columnNumber--;
            ans += char('A' + columnNumber % 26);
            columnNumber /= 26;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
