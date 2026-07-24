/*
    Problem: HQ9+
    Platform: Codeforces
    Contest: Codeforces Beta Round 96 (Div. 2)
    Language: C++17

    Approach:
    - Read the input string.
    - Traverse each character.
    - If any character is 'H', 'Q', or '9', print "YES".
    - Otherwise, print "NO".

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (char c : s) {
        if (c == 'H' || c == 'Q' || c == '9') {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}
