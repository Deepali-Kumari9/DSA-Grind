/*
    Problem: Riptide
    Platform: Codeforces (Round 1114 Div. 3 - A)
    Language: C++17

    Approach:
    - Read the three integers into a vector.
    - Sort the vector in ascending order.
    - Compute the differences between consecutive elements.
    - The answer is the smaller of the two adjacent differences.
    - Print the result for each test case.

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<int> a(3);

        for (int i = 0; i < 3; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        cout << min(a[1] - a[0], a[2] - a[1]) << "\n";
    }

    return 0;
}
