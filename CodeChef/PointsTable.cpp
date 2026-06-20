/*
 * Problem          : Points Table
 * Platform         : CodeChef (POINTT)
 * Difficulty       : 314
 *
 * Approach         : Compared primary scores X and A first.
 *                    If X > A, Alice wins.
 *                    If X < A, Bob wins.
 *                    If equal, compared secondary scores Y and B.
 *                    If Y > B, Alice wins.
 *                    If Y < B, Bob wins.
 *                    If both equal, Alice wins (registered first).
 *
 * Time Complexity  : O(1)
 * Space Complexity : O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y, A, B;
    cin >> X >> Y >> A >> B;

    if (X > A) {
        cout << "Alice";
    } else if (X < A) {
        cout << "Bob";
    } else {
        if (Y > B) {
            cout << "Alice";
        } else if (Y < B) {
            cout << "Bob";
        } else {
            cout << "Alice";
        }
    }

    return 0;
}
