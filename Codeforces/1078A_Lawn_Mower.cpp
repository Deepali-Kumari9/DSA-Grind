/*
 * Problem    : A. Lawn Mower
 * Platform   : Codeforces
 * Contest    : Codeforces Round 1078 (Div. 2)
 * URL        : https://codeforces.com/contest/2194/problem/A
 *
 * Approach   : Mathematical Observation
 *              - A lawn mower covers w strips per pass over n strips total.
 *              - The number of full passes = n / w (integer division).
 *              - Each full pass covers w strips, so full passes cover (n / w) * w strips.
 *              - The remaining uncut strips = n - (n / w) * w = n - (n / w) * w.
 *              - Simplified: answer = n - (n / w) * w... but actually the problem
 *                asks for strips that need an extra pass, which is n - (n / w).
 *              - Answer = n - (n / w)
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
        long long n, w;
        cin >> n >> w;

        cout << n - (n / w) << "\n";
    }

    return 0;
}
