/*
 * Problem    : Equal Buying (EQBUY)
 * Platform   : CodeChef
 * URL        : https://www.codechef.com/problems/EQBUY
 *
 * Approach   : Mathematical Observation
 *              - Each sack of flour weighs 2 kg, each sack of sugar weighs 1 kg.
 *              - If Chef bought k sacks of each, total weight = 2k + k = 3k.
 *              - So N must be divisible by 3 for equal buying to be possible.
 *              - Simply check if N % 3 == 0 → "Yes", else → "No".
 *
 * Time  Complexity : O(1)
 * Space Complexity : O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N % 3 == 0)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
