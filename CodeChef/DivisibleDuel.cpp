/*
    Problem: Divisible Duel
    Platform: CodeChef
    Language: C++17

    Approach:
    - Iterate through all numbers from X to Y.
    - Consider only the numbers divisible by X.
    - Separate them based on parity:
        * Add even multiples to the even sum.
        * Add odd multiples to the odd sum.
    - Compare the two sums:
        * If evenSum >= oddSum, print "YES".
        * Otherwise, print "NO".

    Time Complexity: O(Y - X + 1)
    Space Complexity: O(1)

    Where:
    - X = lower bound of the range
    - Y = upper bound of the range
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        int evenSum = 0, oddSum = 0;

        for (int i = X; i <= Y; i++) {
            if (i % X == 0) {
                if (i % 2 == 0)
                    evenSum += i;
                else
                    oddSum += i;
            }
        }

        if (evenSum >= oddSum)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
