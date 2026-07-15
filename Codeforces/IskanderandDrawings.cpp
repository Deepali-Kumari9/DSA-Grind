/*
 * Problem          : Iskander and Drawings
 * Platform         : Codeforces Round 1109 (Div. 3)
 * Problem          : A
 * Difficulty       : Easy
 * Topic            : Greedy, Implementation
 *
 * Approach         : Traversed the drawing and counted
 *                    each consecutive block of '#'
 *                    characters.
 *                    For every block, the maximum number
 *                    of drawings that can be formed is
 *                    ceil(length / 2), computed as
 *                    (length + 1) / 2.
 *                    The answer is the maximum value
 *                    among all such blocks.
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;

        cin >> n;
        cin >> s;

        int ans = 0;
        int i = 0;

        while (i < n) {
            if (s[i] == '#') {
                int cnt = 0;

                while (i < n && s[i] == '#') {
                    cnt++;
                    i++;
                }

                ans = max(ans, (cnt + 1) / 2);
            } else {
                i++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
