/*
 * Problem          : Party Monster
 * Platform         : Codeforces
 * Contest          : Codeforces Round 1096 (Div. 3)
 * Problem          : B
 *
 * Approach         : Counted the number of '(' in the string.
 *                    If 2 * count of '(' == n, then the string
 *                    has equal opening and closing brackets
 *                    which means it's balanced — output YES.
 *                    Otherwise output NO.
 *
 * Time Complexity  : O(n)
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
        int n;
        string s;
        cin >> n >> s;

        int open = count(s.begin(), s.end(), '(');

        cout << (2 * open == n ? "YES" : "NO") << '\n';
    }

    return 0;
}
