/*
    Problem: Television Channels
    Platform: CodeChef
    Language: C++17

    Approach:
    - Channels are numbered from 1 to X.
    - Every even-numbered channel has stopped working.
    - Therefore, only the odd-numbered channels remain.
    - The number of odd integers from 1 to X is (X + 1) / 2.

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int X;
    cin >> X;

    cout << (X + 1) / 2;

    return 0;
}
