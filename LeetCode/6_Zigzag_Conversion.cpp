/*
 * Problem    : 6. Zigzag Conversion
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/zigzag-conversion/
 *
 * Approach   : Row Simulation with Direction Flag
 *              - Edge case: if numRows == 1 or numRows >= s.size(), return s directly.
 *              - Create a vector of strings `rows` of size numRows.
 *              - Maintain currRow (current row) and goingDown (direction flag).
 *              - For each character in s:
 *                  - Append it to rows[currRow].
 *                  - If at row 0 or row numRows-1, toggle goingDown.
 *                  - Move currRow up or down based on goingDown.
 *              - Concatenate all rows to form the final answer.
 *
 * Time  Complexity : O(n) — single pass through the string
 * Space Complexity : O(n) — rows store all n characters total
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.size())
            return s;

        vector<string> rows(numRows);
        int currRow = 0;
        bool goingDown = false;

        for (char c : s) {
            rows[currRow] += c;
            if (currRow == 0 || currRow == numRows - 1)
                goingDown = !goingDown;
            currRow += goingDown ? 1 : -1;
        }

        string ans;
        for (string row : rows)
            ans += row;

        return ans;
    }
};
