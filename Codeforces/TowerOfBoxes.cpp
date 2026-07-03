/*
 * Problem    : A. Towers of Boxes
 * Platform   : Codeforces
 * Contest    : Educational Codeforces Round 187 (Rated for Div. 2)
 * URL        : https://codeforces.com/contest/2131/problem/A
 *
 * Approach   : Greedy + Ceiling Division
 *
 *              - Each tower can contain at most:
 *                    floor(d / m) + 1 boxes
 *                because the difference between the largest and
 *                smallest box in a tower cannot exceed d.
 *
 *              - Let:
 *                    maxBoxes = d / m + 1
 *
 *              - To minimize the number of towers, place the
 *                maximum possible number of boxes in each tower.
 *
 *              - The required number of towers is simply the
 *                ceiling of:
 *
 *                    n / maxBoxes
 *
 *              - Ceiling division is computed as:
 *
 *                    (n + maxBoxes - 1) / maxBoxes
 *
 * Time Complexity : O(1) per test case
 *
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n, m, d;
        cin >> n >> m >> d;

        int maxBoxes = d / m + 1;

        cout << (n + maxBoxes - 1) / maxBoxes << "\n";
    }

    return 0;
}
