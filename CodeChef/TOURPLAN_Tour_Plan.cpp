/*
 * Problem    : Tour Plan (TOURPLAN)
 * Platform   : CodeChef
 * Contest    : Starters 239 (Rated)
 * URL        : https://www.codechef.com/problems/TOURPLAN
 *
 * Approach   : Simple Conditional Arithmetic
 *              - Chef pays a fixed cost X for the first 50 km.
 *              - If Z <= 50, total cost = X (fixed cost covers the trip).
 *              - If Z > 50, total cost = X + (Z - 50) * Y
 *                where (Z - 50) is the extra kilometers beyond 50,
 *                and Y is the per-km charge for those extra kilometers.
 *
 * Time  Complexity : O(1)
 * Space Complexity : O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y, Z;
    cin >> X >> Y >> Z;

    if (Z > 50)
        cout << X + ((Z - 50) * Y);
    else
        cout << X;

    return 0;
}
