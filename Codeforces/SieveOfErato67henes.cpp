/*
 * Problem          : Sieve of Erato67henes
 * Platform         : Codeforces
 * Contest          : Codeforces Round 1080 (Div. 3)
 * Problem          : A
 *
 * Approach         : For each test case, read n integers.
 *                    Check if any of them equals 67.
 *                    If found, print YES else print NO.
 *
 * Time Complexity  : O(t * n)
 * Space Complexity : O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        bool found = false;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x == 67)
                found = true;
        }

        cout << (found ? "YES" : "NO") << '\n';
    }

    return 0;
}
