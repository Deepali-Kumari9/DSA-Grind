/*
 * Problem          : Minimum Remove to Make Valid Parentheses
 * Platform         : LeetCode #1249
 * Difficulty       : Medium
 * Topic            : Stack, String
 *
 * Approach         : Used a stack to store indices of '('.
 *                    Invalid ')' were marked for removal.
 *                    Remaining unmatched '(' were removed.
 *                    Constructed answer using valid characters.
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(n)
 */

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        vector<bool> remove(s.size(), false);

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(i);
            }
            else if (s[i] == ')') {
                if (!st.empty()) {
                    st.pop();
                } else {
                    remove[i] = true;
                }
            }
        }

        while (!st.empty()) {
            remove[st.top()] = true;
            st.pop();
        }

        string ans;
        for (int i = 0; i < s.size(); i++) {
            if (!remove[i]) {
                ans += s[i];
            }
        }

        return ans;
    }
};
