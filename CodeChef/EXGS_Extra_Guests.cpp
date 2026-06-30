/*
 * Problem    : Extra Guests (EXGS)
 * Platform   : CodeChef
 * Contest    : Starters 236 (Rated)
 * URL        : https://www.codechef.com/problems/EXGS
 *
 * Approach   : Simple Arithmetic
 *              - Chef already ordered X plates at 100 rupees each.
 *              - For every extra guest beyond X (i.e., Y - X people), Chef
 *                needs to order additional plates at 150 rupees each.
 *              - Total cost = (X * 100) + ((Y - X) * 150)
 *
 * Time  Complexity : O(1)
 * Space Complexity : O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;
    cout << (X * 100) + ((Y - X) * 150);
    return 0;
}
