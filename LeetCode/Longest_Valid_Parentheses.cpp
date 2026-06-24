/*
 * Problem    : 32. Longest Valid Parentheses
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/longest-valid-parentheses/
 *
 * Approach   : Stack-based Index Tracking
 *              - Initialize a stack with -1 as a base index to handle edge cases.
 *              - For each '(' push its index onto the stack.
 *              - For each ')' pop the top element:
 *                  - If stack becomes empty, push current index as the new base.
 *                  - Otherwise, calculate valid length as (current index - new stack top)
 *                    and update the maximum.
 *              - This avoids re-scanning and handles all nested/sequential cases in one pass.
 *
 * Time  Complexity : O(n) — single pass through the string
 * Space Complexity : O(n) — stack stores at most n indices
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);
        int maxi = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(i);
            } else {
                st.pop();

                if (st.empty()) {
                    st.push(i);
                } else {
                    maxi = max(maxi, i - st.top());
                }
            }
        }

        return maxi;
    }
};
