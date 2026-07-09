/*
 * Problem    : 125. Valid Palindrome
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/valid-palindrome/
 *
 * Approach   : Two-Pointer with On-the-fly Filtering
 *              - Use two pointers: left starting from 0, right from end.
 *              - Skip non-alphanumeric characters from both ends using isalnum().
 *              - Compare characters using tolower() for case-insensitive matching.
 *              - If a mismatch is found, return false immediately.
 *              - If pointers meet without mismatch, return true.
 *              - No extra string created — all filtering and comparison done
 *                in-place in a single pass.
 *
 * Time  Complexity : O(n) — single pass through the string
 * Space Complexity : O(1) — no extra space used
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.size() - 1;

        while (left < right) {
            // Skip non-alphanumeric from left
            while (left < right && !isalnum(s[left]))
                left++;

            // Skip non-alphanumeric from right
            while (left < right && !isalnum(s[right]))
                right--;

            // Compare case-insensitively
            if (tolower(s[left]) != tolower(s[right]))
                return false;

            left++;
            right--;
        }

        return true;
    }
};
