/*
 * Problem    : A. Maple and Multiplication
 * Platform   : Codeforces
 * Contest    : Codeforces Round 1048 (Div. 2)
 * URL        : https://codeforces.com/contest/2139/problem/A
 *
 * Approach   : Divisibility Case Analysis
 *              - Given two integers a and b, determine the relationship:
 *                  - If a == b          → output 0 (equal, trivially divisible both ways)
 *                  - If a % b == 0
 *                    OR b % a == 0      → output 1 (one divides the other)
 *                  - Otherwise          → output 2 (neither divides the other)
 *              - Simple conditional check, O(1) per test case.
 *
 * Time  Complexity : O(1) per test case
 * Space Complexity : O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        if (a == b)
            cout << 0 << "\n";
        else if (a % b == 0 || b % a == 0)
            cout << 1 << "\n";
        else
            cout << 2 << "\n";
    }

    return 0;
}
