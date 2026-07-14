/*
 * Problem    : Monthly Earnings (SALARY1)
 * Platform   : CodeChef
 * URL        : https://www.codechef.com/problems/SALARY1
 *
 * Approach   : Simple Arithmetic
 *              - Chef's total earnings = Base salary + Bonus from ratings.
 *              - Total = S + (B * R)
 *                where S = base salary, B = bonus per rating, R = ratings received.
 *
 * Time  Complexity : O(1)
 * Space Complexity : O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int S, B, R;
    cin >> S >> B >> R;
    cout << S + (B * R);
    return 0;
}
