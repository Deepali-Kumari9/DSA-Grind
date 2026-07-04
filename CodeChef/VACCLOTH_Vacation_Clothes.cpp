/*
 * Problem    : Vacation Clothes (VACCLOTH)
 * Platform   : CodeChef
 * Contest    : Starters 232 (Rated)
 * URL        : https://www.codechef.com/problems/VACCLOTH
 *
 * Approach   : Mathematical Observation
 *              - A worn set of clothes returns after 7 days (d + 7).
 *              - Chef needs enough sets so that no day is left without clothes.
 *              - If N <= 7, he needs exactly N sets (one per day, no repeats possible).
 *              - If N > 7, he needs at most 7 sets (clothes cycle back before running out).
 *              - Answer = min(N, 7)
 *
 * Time  Complexity : O(1)
 * Space Complexity : O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << min(n, 7);
    return 0;
}
