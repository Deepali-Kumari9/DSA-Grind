/*
    Problem: Max Triangle
    Platform: CodeChef
    Language: C++17

    Approach:
    - The maximum perimeter is obtained by choosing the three largest sticks:
        N, N-1, and N-2.
    - These form a valid triangle if:
        (N - 2) + (N - 1) > N
      which simplifies to:
        N > 3
    - Therefore:
        - If N = 3, no non-degenerate triangle is possible, so print -1.
        - Otherwise, print:
            N + (N - 1) + (N - 2)
          = 3 * N - 3.

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long N;
        cin >> N;

        if (N == 3)
            cout << -1 << '\n';
        else
            cout << 3 * N - 3 << '\n';
    }

    return 0;
}
