/*
 * Problem    : A. Notelock
 * Platform   : Codeforces
 * Contest    : Codeforces Round 1060 (Div. 2)
 * URL        : https://codeforces.com/contest/2154/problem/A
 *
 * Approach   : Greedy — Count Valid '1's with Gap Constraint
 *              - Scan the binary string left to right.
 *              - Maintain `last` = index of the last selected '1', initialized to -k.
 *              - For every '1' at index i:
 *                  - If i - last >= k: this '1' can be selected (gap is sufficient).
 *                    Increment ans and update last = i.
 *                  - Otherwise: update last = i (this '1' is too close, skip it
 *                    but update last so future '1's are counted from here).
 *              - This greedy ensures we pick as many valid '1's as possible
 *                while maintaining the minimum gap of k between selections.
 *
 * Time  Complexity : O(n) per test case — single pass through the string
 * Space Complexity : O(n) — storing the input string
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int ans  = 0;
        int last = -k;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                if (i - last >= k) {
                    ans++;
                    last = i;
                } else {
                    last = i;
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
