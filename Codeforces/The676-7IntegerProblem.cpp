/*
 * Problem          : The 67th 6-7 Integer Problem
 * Platform         : Codeforces
 * Contest          : Codeforces Round 1090 (Div. 4)
 * Problem          : B
 *
 * Approach         : Read 7 integers, tracked their sum and
 *                    maximum value. The answer is 2*max - sum.
 *                    This works because to minimize the cost,
 *                    the maximum element is paired with all
 *                    others, and the formula gives the
 *                    minimum possible difference.
 *
 * Time Complexity  : O(t)
 * Space Complexity : O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int mx = INT_MIN;
        int sum = 0;

        for (int i = 0; i < 7; i++) {
            int x;
            cin >> x;
            sum += x;
            mx = max(mx, x);
        }

        cout << 2 * mx - sum << '\n';
    }

    return 0;
}
