/*
 * Problem    : 58. Length of Last Word
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/length-of-last-word/
 *
 * Approach   : Two-pass Reverse Traversal
 *              - Start from the end of the string.
 *              - Pass 1: Skip all trailing spaces by moving i back while s[i] == ' '.
 *              - Pass 2: Count characters while s[i] != ' ' — this gives the
 *                length of the last word.
 *              - Handles strings with trailing spaces cleanly without any
 *                string splitting or extra space.
 *
 * Time  Complexity : O(n) — at most two passes from the end
 * Space Complexity : O(1) — no extra space used
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1;

        // Skip trailing spaces
        while (i >= 0 && s[i] == ' ')
            i--;

        // Count last word characters
        int count = 0;
        while (i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }

        return count;
    }
};
