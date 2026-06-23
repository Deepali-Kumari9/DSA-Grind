/*
 * Problem          : New Year Resolution
 * Platform         : CodeChef (NYRES)
 * Difficulty       : Easy
 * Topic            : Math
 *
 * Approach         : Chef performs exactly X push-ups
 *                    every day.
 *                    Since January has 31 days,
 *                    total push-ups = X × 31.
 *                    Direct multiplication gives
 *                    the required answer.
 *
 * Time Complexity  : O(1)
 * Space Complexity : O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;

    cout << 31 * x;

    return 0;
}
