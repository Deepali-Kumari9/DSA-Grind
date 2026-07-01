/*
 * Problem    : A. Operations with Inversions
 * Platform   : Codeforces
 * Contest    : Codeforces Round 1070 (Div. 2)
 * URL        : https://codeforces.com/contest/2176/problem/A
 *
 * Approach   : Greedy — Count Elements Smaller Than Running Maximum
 *              - Track the running maximum (mx) as we scan left to right.
 *              - For each element after the first:
 *                  - If a[i] < mx, it forms an inversion with the current max
 *                    → increment answer.
 *                  - Otherwise, update mx = a[i].
 *              - This counts the minimum number of operations needed by
 *                identifying how many elements are out of the natural
 *                non-decreasing order relative to the running max.
 *
 * Time  Complexity : O(n) per test case — single left-to-right pass
 * Space Complexity : O(n) — storing the input array
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int mx  = a[0];
        int ans = 0;

        for (int i = 1; i < n; i++) {
            if (a[i] < mx)
                ans++;
            else
                mx = a[i];
        }

        cout << ans << "\n";
    }

    return 0;
}
