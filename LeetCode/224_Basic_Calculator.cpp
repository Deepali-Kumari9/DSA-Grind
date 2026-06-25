/*
 * Problem    : 224. Basic Calculator
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/basic-calculator/
 *
 * Approach   : Stack-based Expression Evaluation
 *              - Maintain three variables: result (running total), num (current number),
 *                and sign (current sign, +1 or -1).
 *              - On digit: build the multi-digit number using num = num * 10 + (c - '0').
 *              - On '+' or '-': flush current num into result with its sign, update sign.
 *              - On '(': push current result and sign onto stack, then reset both.
 *                        This saves the context before entering the sub-expression.
 *              - On ')': finalize inner result, multiply by saved sign (stack top),
 *                        then add saved result (second stack top) to get the outer result.
 *              - After the loop, flush the last number into result.
 *              - Handles multi-digit numbers, spaces, and arbitrarily nested parentheses.
 *
 * Time  Complexity : O(n) — single pass through the string
 * Space Complexity : O(n) — stack stores at most O(n) context frames
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int calculate(string s) {
        stack<long long> st;
        long long result = 0;
        long long num = 0;
        long long sign = 1;

        for (char c : s) {
            if (isdigit(c)) {
                num = num * 10 + (c - '0');
            }
            else if (c == '+') {
                result += sign * num;
                num = 0;
                sign = 1;
            }
            else if (c == '-') {
                result += sign * num;
                num = 0;
                sign = -1;
            }
            else if (c == '(') {
                st.push(result);
                st.push(sign);
                result = 0;
                sign = 1;
            }
            else if (c == ')') {
                result += sign * num;
                num = 0;

                result *= st.top(); st.pop();  // multiply by saved sign
                result += st.top(); st.pop();  // add saved result
            }
        }

        result += sign * num;
        return (int)result;
    }
};
