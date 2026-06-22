/*
 * Problem          : Valid Parenthesis String
 * Platform         : LeetCode #678
 * Difficulty       : Medium
 * Topic            : Greedy / String
 *
 * Approach         : Maintain a range [low, high] representing
 *                    the minimum and maximum possible number
 *                    of open parentheses at each position.
 *
 *                    '(' increases both low and high.
 *                    ')' decreases both low and high.
 *                    '*' can act as '(', ')' or empty:
 *                    therefore low decreases and high increases.
 *
 *                    If high becomes negative, there are more
 *                    closing brackets than possible openings,
 *                    so the string is invalid.
 *
 *                    Keep low non-negative since minimum open
 *                    brackets cannot be less than zero.
 *
 *                    At the end, if low is zero, a valid
 *                    interpretation exists.
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 */

class Solution {
public:
    bool checkValidString(string s) {
        int low = 0, high = 0;

        for(char c : s) {
            if(c == '(') {
                low++;
                high++;
            }
            else if(c == ')') {
                low--;
                high--;
            }
            else { // '*'
                low--;
                high++;
            }

            if(high < 0)
                return false;

            low = max(low, 0);
        }

        return low == 0;
    }
};
