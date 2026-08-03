/*
    Problem: 731A. Night at the Museum
    Platform: Codeforces
    Language: C++17

    Approach:
    - Start with the pointer at character 'a'.
    - For each character in the string:
        * Calculate the clockwise distance.
        * Calculate the counter-clockwise distance.
        * Add the minimum of the two distances to the answer.
        * Update the current pointer position.
    - The total accumulated distance is the minimum number of rotations.

    Time Complexity: O(n)
    Space Complexity: O(1)

    where:
    - n = length of the string
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    char cur = 'a';
    int ans = 0;

    for (char ch : s) {
        int diff = abs(ch - cur);
        ans += min(diff, 26 - diff);
        cur = ch;
    }

    cout << ans;
    return 0;
}
