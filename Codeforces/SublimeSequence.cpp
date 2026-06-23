/*
 * Problem          : Sublime Sequence
 * Platform         : Codeforces Round 1050 (Div. 4)
 * Problem          : A
 * Difficulty       : Easy
 * Topic            : Math
 *
 * Approach         : Observed that the answer depends only
 *                    on the parity of n.
 *                    If n is even, output 0.
 *                    If n is odd, output x.
 *                    Direct implementation using a simple
 *                    conditional check.
 *
 * Time Complexity  : O(1)
 * Space Complexity : O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, n;
        cin >> x >> n;

        if (n % 2 == 0)
            cout << 0 << '\n';
        else
            cout << x << '\n';
    }

    return 0;
}
