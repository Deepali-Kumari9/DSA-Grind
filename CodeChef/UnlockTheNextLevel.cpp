/*
    Problem: Unlock the Next Level
    Platform: CodeChef
    Language: C++17

    Approach:
    - Read the required XP (X) and Chef's current XP (Y).
    - If Chef already has enough XP (Y >= X), print "UNLOCKED".
    - Otherwise, print the additional XP required (X - Y).

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    if (Y >= X) {
        cout << "UNLOCKED";
    } else {
        cout << (X - Y);
    }

    return 0;
}
