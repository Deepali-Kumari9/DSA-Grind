/*
 * Problem    : 2697. Lexicographically Smallest Palindrome
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/lexicographically-smallest-palindrome/
 *
 * Approach   : Two-Pointer Greedy
 *              - Use two pointers i (start) and j (end) moving inward.
 *              - When s[i] != s[j], set both to min(s[i], s[j]).
 *                  - This uses only 1 operation instead of 2.
 *                  - Picking the smaller character ensures the result is
 *                    lexicographically smallest among all valid palindromes.
 *              - When s[i] == s[j], no change needed — already matching.
 *              - Move i forward and j backward after each check.
 *              - Single pass, fully in-place.
 *
 * Time  Complexity : O(n) — single pass with two pointers
 * Space Complexity : O(1) — in-place modification of the string
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;

        while (i < j) {
            if (s[i] != s[j]) {
                char ch = min(s[i], s[j]);
                s[i] = ch;
                s[j] = ch;
            }
            i++;
            j--;
        }

        return s;
    }
};
