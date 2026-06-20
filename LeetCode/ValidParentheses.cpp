/*
 * Problem          : Valid Parentheses
 * Platform         : LeetCode #20
 * Difficulty       : Easy
 * Topic            : Stack / Strings
 *
 * Approach         : Used a stack to match brackets.
 *                    For every opening bracket push it.
 *                    For every closing bracket check if stack
 *                    is empty — return false if yes.
 *                    Check if top matches closing bracket.
 *                    If not return false, else pop.
 *                    At the end return st.empty().
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(n)
 */

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else {
                if (st.empty()) return false;
                char top = st.top();
                st.pop();

                if ((ch == ')' && top != '(') ||
                    (ch == '}' && top != '{') ||
                    (ch == ']' && top != '[')) {
                    return false;
                }
            }
        }
        return st.empty();
    }
};
