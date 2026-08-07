/*
    Problem: Sum it
    Platform: CodeChef
    Language: C++17

    Approach:
    - Read the number of test cases.
    - For each test case, read A, B, and C.
    - Check whether Alice's answer is correct by verifying if A + B equals C.
    - Print "YES" if correct; otherwise print "NO".

    Time Complexity: O(T)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;

        if (A + B == C)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
