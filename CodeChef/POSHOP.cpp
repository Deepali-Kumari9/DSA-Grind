```cpp
/*
    Problem: Posh Shopping
    Platform: CodeChef
    Contest: Starters 253

    Approach:
    - Chef can buy at most two items.
    - If buying two items i and j (i < j), the second item's
      cost must be greater than or equal to the first item's cost.
    - Check every possible pair of items.
    - For each valid pair, calculate their total cost.
    - Also consider buying only one item.
    - Keep track of the maximum possible amount.

    Time Complexity: O(N^2)
    Space Complexity: O(N)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> C(N);
        int ans = INT_MIN;

        for (int i = 0; i < N; i++) {
            cin >> C[i];
            ans = max(ans, C[i]);
        }

        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                if (C[i] <= C[j]) {
                    int sum = C[i] + C[j];
                    ans = max(ans, sum);
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
```

**GitHub file name:** `POSHOP.cpp`
