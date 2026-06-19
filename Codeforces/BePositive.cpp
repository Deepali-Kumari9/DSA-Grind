/*
 * Problem          : Be Positive
 * Platform         : Codeforces Round 1054 (Div. 3) - Problem A
 * Difficulty       : 800
 * Topic            : Math / Counting
 *
 * Approach         : Count the number of negative numbers (-1)
 *                    and zeros (0) in the array.
 *
 *                    If the count of negative numbers is odd,
 *                    two operations are needed:
 *                    1. Convert one negative number to positive.
 *                    2. Adjust the product sign.
 *
 *                    If there is at least one zero available,
 *                    one operation is enough.
 *
 *                    Therefore:
 *                    - Answer = number of zeros.
 *                    - If negatives are odd, add 2 more operations.
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
        cin >> n;

        int neg = 0, zero = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x == -1)
                neg++;
            else if (x == 0)
                zero++;
        }

        int ans = zero;

        if (neg % 2)
            ans += 2;

        cout << ans << '\n';
    }

    return 0;
}
