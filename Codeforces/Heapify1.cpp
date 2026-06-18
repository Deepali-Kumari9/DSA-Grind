/*
 * Problem          : Heapify 1
 * Platform         : Codeforces
 * Contest          : Codeforces Round 1080 (Div. 3)
 * Problem          : B
 *
 * Approach         : Extracted the odd part of each element by
 *                    dividing out all factors of 2.
 *                    If all elements have the same odd part,
 *                    the array can be heapified — print YES.
 *                    Otherwise print NO.
 *
 * Time Complexity  : O(t * n * log(max(a)))
 * Space Complexity : O(n)
 */

#include <bits/stdc++.h>
using namespace std;

int oddPart(int x) {
    while (x % 2 == 0) x /= 2;
    return x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n + 1);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        bool ok = true;

        for (int i = 1; i <= n; i++) {
            if (oddPart(i) != oddPart(a[i])) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}
