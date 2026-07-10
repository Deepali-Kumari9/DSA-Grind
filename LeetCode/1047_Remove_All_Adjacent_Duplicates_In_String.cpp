/*
 * Problem    : 1047. Remove All Adjacent Duplicates In String
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
 *
 * Approach   : String as Stack
 *              - Use the result string `ans` itself as a stack.
 *              - For each character ch in s:
 *                  - If ans is non-empty and ans.back() == ch:
 *                    pop the last character (remove the adjacent duplicate pair).
 *                  - Otherwise: push ch onto ans.
 *              - Single pass, O(n) time.
 *              - Using the answer string as the stack avoids extra memory and
 *                keeps the code concise — no separate stack data structure needed.
 *
 * Time  Complexity : O(n) — single pass through the string
 * Space Complexity : O(n) — result string stores at most n characters
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        string ans;

        for (char ch : s) {
            if (!ans.empty() && ans.back() == ch)
                ans.pop_back();
            else
                ans.push_back(ch);
        }

        return ans;
    }
};
