/*
 * Problem    : A. Souvlaki VS. Kalamaki
 * Platform   : Codeforces
 * Contest    : Codeforces Round 1063 (Div. 2)
 * URL        : https://codeforces.com/contest/2163/problem/A
 *
 * Approach   : Sort + Pairwise Check
 *              - Sort the array in non-decreasing order.
 *              - Check consecutive pairs at odd indices (i = 1, 3, 5, ...):
 *                if a[i] != a[i+1], it means the pairing is invalid → output "NO".
 *              - If all such pairs match, output "YES".
 *              - The key insight: after sorting, valid pairs must have equal values
 *                at positions (1,2), (3,4), (5,6), etc. (0-indexed: 1&2, 3&4...).
 *
 * Time  Complexity : O(n log n) per test case — sorting dominates
 * Space Complexity : O(n) — storing the array
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

        sort(a.begin(), a.end());

        bool ok = true;
        for (int i = 1; i < n - 1; i += 2) {
            if (a[i] != a[i + 1]) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}
