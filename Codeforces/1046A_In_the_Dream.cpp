/*
 * Problem    : A. In the Dream
 * Platform   : Codeforces
 * Contest    : Codeforces Round 1046 (Div. 2)
 * URL        : https://codeforces.com/contest/2136/problem/A
 *
 * Approach   : Mathematical Validity Check
 *              - Given a rectangle of size a x b and a target rectangle of size c x d,
 *                we need to check if the target fits within the source under the given
 *                constraints of the dream world.
 *              - A pair (x, y) is considered valid if:
 *                    x <= 2 * (y + 1)  AND  y <= 2 * (x + 1)
 *              - Check validity for both (a, b) and (c - a, d - b).
 *              - If both pairs satisfy the valid() condition, output "YES", else "NO".
 *
 * Time  Complexity : O(1) per test case
 * Space Complexity : O(1)
 */

#include <bits/stdc++.h>
using namespace std;

bool valid(int x, int y) {
    return x <= 2 * (y + 1) &&
           y <= 2 * (x + 1);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (valid(a, b) && valid(c - a, d - b))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
