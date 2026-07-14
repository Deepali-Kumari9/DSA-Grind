/*
 * Problem    : A. New World, New Me, New Array
 * Platform   : Codeforces
 * Contest    : Codeforces Round 1006 (Div. 3)
 * URL        : https://codeforces.com/contest/2072/problem/A
 *
 * Approach   : Mathematical Ceiling Division
 *              - We need to find the minimum number of elements of value p
 *                required to reach sum >= |k| using exactly n elements total.
 *              - If abs(k) > n * p, it's impossible → output -1.
 *              - Otherwise, the minimum number of p-valued elements needed
 *                is ceil(abs(k) / p) = (abs(k) + p - 1) / p (integer ceiling).
 *
 * Time  Complexity : O(1) per test case
 * Space Complexity : O(1)
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, p;
        cin >> n >> k >> p;

        if (abs(k) > n * p) {
            cout << -1 << endl;
        } else {
            cout << (abs(k) + p - 1) / p << endl;
        }
    }

    return 0;
}
