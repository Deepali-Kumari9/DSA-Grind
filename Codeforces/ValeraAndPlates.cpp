/*
    Problem: Valera and Plates
    Platform: Codeforces
    Language: C++17

    Approach:
    - Maintain the number of clean bowls (m) and clean plates (k).
    - For each dish:
        * If it requires a bowl (a == 1):
            - Use a clean bowl if available.
            - Otherwise, wash a bowl and count one wash.
        * If it requires a plate (a == 2):
            - Prefer using a clean plate.
            - If no plate is available, use a clean bowl.
            - If neither is available, wash a plate and count one wash.
    - Output the total number of washes required.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    int washes = 0;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        if (a == 1) {
            if (m > 0)
                m--;
            else
                washes++;
        } else {
            if (k > 0)
                k--;
            else if (m > 0)
                m--;
            else
                washes++;
        }
    }

    cout << washes << endl;
    return 0;
}
