/*
 * Problem    : Chef Need Runs (CHEFRUNS)
 * Platform   : CodeChef
 * URL        : https://www.codechef.com/problems/CHEFRUNS
 *
 * Approach   : Simple Arithmetic
 *              - Chef's team needs to score more than the opponent to win.
 *              - The minimum runs required = opponentScore - currentScore + 1.
 *              - This directly gives the number of additional runs needed to
 *                surpass the opponent's total.
 *
 * Time  Complexity : O(1)
 * Space Complexity : O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int findRequiredRuns(int opponentScore, int currentScore) {
    return opponentScore - currentScore + 1;
}
