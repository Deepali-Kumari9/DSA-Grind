/*
    Problem: Buying GPU
    Platform: CodeChef
    Language: C++17

    Approach:
    - For each test case, compare the GPU price increase (Y)
      with the monthly savings (Z).
    - If the GPU price increases at the same rate or faster
      than Chef earns coins (Z <= Y), buying the GPU is impossible.
    - Otherwise, calculate the minimum number of months required
      using ceiling division:
          (X + (Z - Y) - 1) / (Z - Y)
    - Print the required months or -1 if impossible.

    Time Complexity: O(T)
    Space Complexity: O(1)

    where:
    - T = Number of test cases
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        if (Z <= Y)
            cout << -1 << endl;
        else
            cout << (X + (Z - Y) - 1) / (Z - Y) << endl;
    }

    return 0;
}
