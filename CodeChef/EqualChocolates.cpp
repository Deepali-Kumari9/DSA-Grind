/*
    Problem: Equal Chocolates
    Platform: CodeChef
    Language: C++17

    Approach:
    - Compute the total chocolates in both types of boxes.
    - First type contains A × X chocolates.
    - Second type contains B × Y chocolates.
    - If both totals are equal, print "YES"; otherwise print "NO".

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, X, B, Y;
    cin >> A >> X >> B >> Y;

    if (A * X == B * Y)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
