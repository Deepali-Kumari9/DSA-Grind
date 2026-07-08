/*
 * Problem    : A. Square?
 * Platform   : Codeforces
 * Contest    : Codeforces Round 1062 (Div. 4)
 * URL        : https://codeforces.com/contest/2160/problem/A
 *
 * Approach   : Direct Comparison
 *
 *              - Read the four side lengths.
 *              - A valid square has all four sides equal.
 *              - Compare all four values:
 *
 *                    a == b == c == d
 *
 *              - If all sides are equal, print "YES";
 *                otherwise, print "NO".
 *
 * Time Complexity : O(1) per test case
 *                  Only a few comparisons are performed.
 *
 * Space Complexity: O(1)
 *                  No extra space is used.
 */

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a == b && b == c && c == d) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }

    return 0;
}
