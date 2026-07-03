/*
 * Problem    : Payment Scheme
 * Platform   : CodeChef (PAYSC)
 * Difficulty : 213
 * URL        : https://www.codechef.com/problems/PAYSC
 *
 * Approach   : Direct Comparison
 *
 *              Chef has two payment options:
 *
 *              1. Pay 100 coins immediately and then
 *                 X coins every week for 4 weeks.
 *
 *                    Total Cost = 100 + 4 × X
 *
 *              2. Pay 300 coins immediately with no
 *                 future payments.
 *
 *              Compute the total cost of the first
 *              scheme and compare it with 300.
 *
 *              The minimum of these two values is
 *              the required answer.
 *
 * Time Complexity : O(1)
 *                  Only one arithmetic calculation.
 *
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {

    int x;
    cin >> x;

    cout << min(100 + 4 * x, 300);

    return 0;
}
