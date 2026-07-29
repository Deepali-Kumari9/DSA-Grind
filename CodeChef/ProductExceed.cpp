/*
    Problem: Product Exceed
    Platform: CodeChef
    Language: C++17

    Approach:
    - Try increasing X and Y using the minimum number of moves.
    - For every possible total number of moves k:
        - Distribute the moves between X and Y.
        - Check whether the new product becomes at least P.
    - As soon as a valid distribution is found,
      print the current number of moves.

    Time Complexity: O(T × K²)
    Space Complexity: O(1)

    where:
    - T = Number of test cases
    - K = Minimum moves explored until the answer is found
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y, P;
        cin >> X >> Y >> P;

        int ans = 0;

        for (int k = 0;; k++) {
            bool found = false;

            for (int i = 0; i <= k; i++) {
                int newX = X + i;
                int newY = Y + (k - i);

                if (newX * newY >= P) {
                    ans = k;
                    found = true;
                    break;
                }
            }

            if (found)
                break;
        }

        cout << ans << endl;
    }

    return 0;
}
