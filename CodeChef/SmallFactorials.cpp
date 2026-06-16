/*
 * Problem          : Small Factorials
 * Platform         : CodeChef (FCTRL2)
 * Difficulty       : 648
 *
 * Approach         : Used a vector to store digits of the result.
 *                    Started with fact = [1], then for each x from
 *                    2 to n, multiplied every digit by x and handled
 *                    carry. Appended extra digits from carry.
 *                    Printed digits in reverse order.
 *
 * Time Complexity  : O(t * n * digits)
 * Space Complexity : O(digits)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> fact;
        fact.push_back(1);

        for (int x = 2; x <= n; x++) {
            int carry = 0;
            for (int i = 0; i < fact.size(); i++) {
                int prod = fact[i] * x + carry;
                fact[i] = prod % 10;
                carry = prod / 10;
            }
            while (carry) {
                fact.push_back(carry % 10);
                carry /= 10;
            }
        }

        for (int i = fact.size() - 1; i >= 0; i--)
            cout << fact[i];

        cout << '\n';
    }

    return 0;
}
