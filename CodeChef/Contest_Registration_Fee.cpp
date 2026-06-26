/*
 * Problem    : Contest Registration Fee (P1235)
 * Platform   : CodeChef
 * Contest    : Starters 235 (Rated)
 * URL        : https://www.codechef.com/problems/P1235
 *
 * Approach   : Simple Conditional Check
 *              - Registration is free for the first X users.
 *              - Alice registered at position Y.
 *              - If Y > X, Alice has to pay 100 rupees; otherwise she pays 0.
 *
 * Time  Complexity : O(1)
 * Space Complexity : O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    if (Y > X) {
        cout << 100;
    } else {
        cout << 0;
    }

    return 0;
}
