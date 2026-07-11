/*
 * Problem    : Entertainments (ENTERTAIN)
 * Platform   : CodeChef
 * URL        : https://www.codechef.com/problems/ENTERTAIN
 *
 * Approach   : Greedy — Minimum Cost Comparison
 *              - Option 1: Buy N toys at 200 rupees each → total = 200 * N.
 *              - Option 2: Buy 1 television for all  → total = 1000 rupees.
 *              - Chef picks the cheaper option.
 *              - If 200 * N <= 1000, buy toys; otherwise buy the television.
 *              - Answer = min(200 * N, 1000)
 *
 * Time  Complexity : O(1)
 * Space Complexity : O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (200 * N <= 1000)
        cout << 200 * N;
    else
        cout << 1000;

    return 0;
}
