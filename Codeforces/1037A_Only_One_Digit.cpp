/*
 * Problem    : A. Only One Digit
 * Platform   : Codeforces
 * Contest    : Codeforces Round 1037 (Div. 3)
 * URL        : https://codeforces.com/contest/2126/problem/A
 *
 * Approach   : Extract Minimum Digit
 *              - Iterate through all digits of x by repeatedly taking x % 10
 *                and dividing x by 10.
 *              - Track the minimum digit seen across all digits.
 *              - Initialize mini = 9 (maximum possible digit).
 *              - Output the minimum digit found.
 *
 * Time  Complexity : O(log x) per test case — number of digits in x
 * Space Complexity : O(1)
 */

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

        int mini = 9;
        while (x > 0) {
            mini = min(mini, x % 10);
            x /= 10;
        }

        cout << mini << endl;
    }

    return 0;
}
