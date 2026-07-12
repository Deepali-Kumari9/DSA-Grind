/*
 * Problem    : Competition of 4 (COMP4)
 * Platform   : CodeChef
 * URL        : https://www.codechef.com/problems/COMP4
 *
 * Approach   : Mathematical Formula
 *              - Prize for rank i = 1000 * 2^(4 - i)
 *              - Rank 1 → 1000 * 2^3 = 8000
 *              - Rank 2 → 1000 * 2^2 = 4000
 *              - Rank 3 → 1000 * 2^1 = 2000
 *              - Rank 4 → 1000 * 2^0 = 1000
 *              - Given rank X, output 1000 * pow(2, 4 - X).
 *
 * Time  Complexity : O(1)
 * Space Complexity : O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int X;
    cin >> X;
    cout << 1000 * (int)pow(2, 4 - X);
    return 0;
}
