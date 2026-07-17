/*
    Problem: A. Minimize!
    Contest: Codeforces Round 971 (Div. 4)
    Platform: Codeforces

    Approach:
    - To minimize the expression, simply output the difference
      between the two given integers.
    - Since a ≤ b, the answer is (b - a).

    Time Complexity: O(1) per test case
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        cout << b - a << "\n";
    }

    return 0;
}
