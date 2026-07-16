/*
 * Problem    : 1071. Greatest Common Divisor of Strings
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/greatest-common-divisor-of-strings/
 *
 * Approach   : GCD of Lengths + Concatenation Check
 *              - Key insight: if a string x divides both str1 and str2, then
 *                str1 + str2 must equal str2 + str1 (both equal x repeated
 *                (len1/len_x + len2/len_x) times).
 *              - If str1 + str2 != str2 + str1, no such GCD string exists → return "".
 *              - Otherwise, the GCD string has length = gcd(str1.length(), str2.length()).
 *              - Return str1.substr(0, gcd_length).
 *              - The numeric GCD of lengths maps perfectly to the string divisibility concept.
 *
 * Time  Complexity : O(n + m) — string concatenation and comparison
 * Space Complexity : O(n + m) — temporary concatenated strings
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1)
            return "";

        int len = gcd(str1.length(), str2.length());
        return str1.substr(0, len);
    }
};
