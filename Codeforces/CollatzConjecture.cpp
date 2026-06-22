/*
 * Problem          : Collatz Conjecture
 * Platform         : Codeforces Round 1047 (Div. 3) - Problem A
 * Difficulty       : 800 (Approx.)
 * Topic            : Math / Bit Manipulation
 *
 * Approach         : According to the Collatz process,
 *                    starting from x, performing k operations
 *                    where each operation doubles the value
 *                    results in:
 *
 *                    x × 2^k
 *
 *                    Since 2^k can be computed efficiently
 *                    using left shift (1LL << k), the answer
 *                    is obtained directly as:
 *
 *                    x * (1LL << k)
 *
 *                    No simulation is required.
 *
 * Time Complexity  : O(1)
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
        long long k, x;
        cin >> k >> x;

        cout << x * (1LL << k) << '\n';
    }

    return 0;
}
