/*
 * Problem    : Vacation Excitement (VACAEX)
 * Platform   : CodeChef
 * URL        : https://www.codechef.com/problems/VACAEX
 *
 * Approach   : Simple Arithmetic
 *              - Chef's excitement starts at Y on March 1st.
 *              - It increases by 1 for each passing day.
 *              - On March X, the excitement level = Y + (X - 1).
 *                (X - 1 days have passed since March 1st.)
 *
 * Time  Complexity : O(1)
 * Space Complexity : O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;
    cout << Y + (X - 1);
    return 0;
}
