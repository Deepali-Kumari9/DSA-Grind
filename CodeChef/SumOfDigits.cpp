/*
 * Problem          : Sum of Digits
 * Platform         : CodeChef (FLOW006)
 * Difficulty       : 455
 *
 * Approach         : Read t test cases.
 *                    For each number, extract digits one by one
 *                    using modulo and division, sum them up,
 *                    and print the result.
 *
 * Time Complexity  : O(t * log n)
 * Space Complexity : O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;

        int digit = 0;
        while (x > 0) {
            digit += x % 10;
            x /= 10;
        }

        cout << digit << '\n';
    }
    return 0;
}
