/*
 * Problem    : 796. Rotate String
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/rotate-string/
 *
 * Approach   : String Concatenation + Substring Search
 *              - Key insight: if goal is a rotation of s, then goal must appear
 *                as a substring within s + s (the string concatenated with itself).
 *              - This works because s + s contains all possible rotations of s
 *                as substrings of length n.
 *              - First check if lengths match — if not, return false immediately.
 *              - Then check if (s + s).find(goal) != string::npos.
 *              - No simulation of rotations needed — just one find call.
 *
 * Time  Complexity : O(n²) — string find on a 2n-length string
 * Space Complexity : O(n)  — temporary string s + s of length 2n
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length())
            return false;

        string temp = s + s;
        return temp.find(goal) != string::npos;
    }
};
