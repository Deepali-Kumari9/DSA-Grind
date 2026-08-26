```cpp
/*
    Problem: Grid Jump
    Platform: CodeChef
    Contest: Starters 253

    Approach:
    - We need to reach (A, B) from (0, 0).
    - Try every possible number of diagonal moves i.
    - Each diagonal move increases both coordinates by 1 and
      costs R coins.
    - After using i diagonal moves:
        remainingA = A - i
        remainingB = B - i
    - Cover the remaining horizontal distance using moves of
      1 or 2 steps, costing P coins.
    - Cover the remaining vertical distance using moves of
      1 or 2 steps, costing Q coins.
    - Calculate the total cost for every possible i and take
      the minimum.

    Time Complexity: O(min(A, B))
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B, P, Q, R;
        cin >> A >> B >> P >> Q >> R;

        int ans = INT_MAX;

        for (int i = 0; i <= min(A, B); i++) {
            int remainingA = A - i;
            int remainingB = B - i;

            int rightCost = ((remainingA + 1) / 2) * P;
            int upCost = ((remainingB + 1) / 2) * Q;
            int diagonalCost = i * R;

            int total = rightCost + upCost + diagonalCost;

            ans = min(ans, total);
        }

        cout << ans << endl;
    }

    return 0;
}
```

**GitHub file name:** `GRDJUMP.cpp`
