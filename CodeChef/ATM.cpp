/*
 * Problem          : ATM
 * Platform         : CodeChef (ATM)
 * Difficulty       : NA
 *
 * Approach         : Checked two conditions for successful withdrawal:
 *                    1. X must be a multiple of 5
 *                    2. Account balance y must be >= X + 0.50 (bank charge)
 *                    If both conditions met, deduct X + 0.50 from balance.
 *                    Otherwise print balance unchanged.
 *
 * Time Complexity  : O(1)
 * Space Complexity : O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    double y;

    cin >> x >> y;

    if (x % 5 == 0 && x + 0.50 <= y) {
        double result = y - x - 0.50;
        cout << fixed << setprecision(2) << result;
    }
    else {
        cout << fixed << setprecision(2) << y;
    }

    return 0;
}
