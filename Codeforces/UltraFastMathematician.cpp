/*
    Problem: A - Ultra-Fast Mathematician
    Platform: Codeforces (Beta Round 57 Div. 2)
    Language: C++17

    Approach:
    - Read the two binary strings.
    - Compare corresponding characters.
    - If both characters are the same, print '0'.
    - Otherwise, print '1'.
    - This is equivalent to performing the XOR operation on the two binary strings.

    Time Complexity: O(N)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] == b[i])
            cout << 0;
        else
            cout << 1;
    }

    return 0;
}
