/*
 * Problem    : 14. Longest Common Prefix
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/longest-common-prefix/
 *
 * Approach   : Incremental Prefix Trimming
 *              - Start with the first string as the initial prefix.
 *              - For each subsequent string, compare it character by character
 *                with the current prefix using index j.
 *              - Trim prefix to prefix.substr(0, j) after each comparison.
 *              - If prefix becomes empty at any point, return "" immediately.
 *              - The prefix shrinks monotonically — once a character is removed,
 *                it can never be added back, making this correct and efficient.
 *
 * Time  Complexity : O(n * L) — n strings, L = average string length
 * Space Complexity : O(L)     — storing the current prefix
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            int j = 0;
            while (j < prefix.length() && j < strs[i].length() && prefix[j] == strs[i][j]) {
                j++;
            }
            prefix = prefix.substr(0, j);
            if (prefix == "")
                return "";
        }

        return prefix;
    }
};
