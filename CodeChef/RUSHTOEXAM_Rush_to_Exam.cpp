/*
 * Problem    : Rush to Exam (RUSHTOEXAM)
 * Platform   : CodeChef
 * Contest    : Starters 226
 * URL        : https://www.codechef.com/problems/RUSHTOEXAM
 *
 * Approach   : Simple Arithmetic Check
 *              - Chef has N hours and reads A pages per hour.
 *              - Total pages he can read = N * A.
 *              - If N * A >= M, Chef can finish all M pages → "Yes".
 *              - Otherwise → "No".
 *
 * Time  Complexity : O(1)
 * Space Complexity : O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, A;
    cin >> N >> M >> A;

    if (N * A >= M)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
