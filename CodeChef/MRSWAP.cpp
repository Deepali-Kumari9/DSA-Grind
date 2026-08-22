```cpp
/*
    Problem: Mirror Swap
    Platform: CodeChef
    Problem Code: MRSWAP

    Approach:
    - Each element Ai can be swapped only with its mirror element
      A(2N + 1 - i).
    - Therefore, for every position in the first half, we can choose
      the larger value from the mirrored pair.
    - Add max(A[i], A[2*N - 1 - i]) for i = 0 to N-1.

    Time Complexity: O(N) per test case
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

        vector<int> A(2 * N);

        for (int i = 0; i < 2 * N; i++) {
            cin >> A[i];
        }

        int sum = 0;

        for (int i = 0; i < N; i++) {
            sum += max(A[i], A[2 * N - 1 - i]);
        }

        cout << sum << endl;
    }

    return 0;
}
```

**GitHub file name:** `MRSWAP.cpp`
