/*
 * Problem    : A. Parkour Design
 * Platform   : Codeforces
 * Contest    : Codeforces Round 1082 (Div. 2)
 * URL        : https://codeforces.com/contest/2202/problem/A
 *
 * Approach   : Mathematical Feasibility Check
 *              - Given x platforms and y obstacles, compute d = x - 2 * y.
 *              - If d < 0 or d % 3 != 0, output "NO" — it's impossible to
 *                distribute the remaining platforms evenly.
 *              - Otherwise, k = d / 3 is the number of triple-platform segments.
 *              - The condition max(0LL, -y) <= k / 2 ensures the obstacle
 *                placement is feasible within the available segments.
 *              - Output "YES" if the condition holds, "NO" otherwise.
 *
 * Time  Complexity : O(1) per test case
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
        long long x, y;
        cin >> x >> y;

        long long d = x - 2 * y;

        if (d < 0 || d % 3 != 0) {
            cout << "NO\n";
            continue;
        }

        long long k = d / 3;

        if (max(0LL, -y) <= k / 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
