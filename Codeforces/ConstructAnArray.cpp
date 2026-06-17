/*
 * Problem          : Construct an Array
 * Platform         : Codeforces
 * Contest          : Codeforces Round 1099 (Div. 2)
 * Problem          : A
 *
 * Approach         : For an array of size n, printed the first
 *                    n odd numbers: 1, 3, 5, ..., 2*n-1.
 *                    These are generated using formula 2*i-1
 *                    for i from 1 to n.
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

        for (int i = 1; i <= n; i++) {
            cout << 2 * i - 1 << " ";
        }
        cout << '\n';
    }

    return 0;
}
