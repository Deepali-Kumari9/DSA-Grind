/*
 * Problem    : B. Fun Permutation
 * Platform   : Codeforces
 * Contest    : Codeforces Round 1047 (Div. 3)
 * URL        : https://codeforces.com/contest/2137/problem/B
 *
 * Approach   : Observation / Construction
 *              - Given a permutation p[] of size n, we need to output a new array
 *                where each element at index i is replaced by (n + 1 - p[i]).
 *              - This maps each value v to its "complement" in the permutation range [1, n],
 *                effectively constructing the required fun permutation in O(n) per test case.
 *              - Fast I/O used to handle multiple test cases efficiently.
 *
 * Time  Complexity : O(n) per test case
 * Space Complexity : O(n) for storing the permutation
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        for (int i = 0; i < n; i++) {
            cout << n + 1 - p[i];
            if (i + 1 < n) cout << ' ';
        }
        cout << '\n';
    }

    return 0;
}
