/*
 * Problem    : Power Grid
 * Platform   : CodeChef (DSA MONDAY 010)
 * Problem Code : POWERGRID
 * URL        : https://www.codechef.com/DSAMONDAY010/problems/POWERGRID
 *
 * Approach   : Direct Multiplication
 *
 *              - The park has R rows and C columns.
 *              - Therefore, the total number of lamps is:
 *
 *                    Lamps = R × C
 *
 *              - Each lamp consumes W watts of power.
 *
 *              - Hence, the total power consumed is:
 *
 *                    Total Power = R × C × W
 *
 *              - Simply read the inputs and output the
 *                calculated value.
 *
 * Time Complexity : O(1)
 *                  Only one multiplication is performed.
 *
 * Space Complexity: O(1)
 *                  No extra space is used.
 */

#include <bits/stdc++.h>
using namespace std;

int main() {

    int R, C, W;
    cin >> R >> C >> W;

    cout << (R * C * W);

    return 0;
}
