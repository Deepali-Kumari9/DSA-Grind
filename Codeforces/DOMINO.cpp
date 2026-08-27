

### Problem

Given a string representing a row of domino tiles, determine the number of valid ways to arrange the tiles according to the given constraints.

### Approach

I used **Dynamic Programming** with a small `2 × 2` state.

* `dp[a][b]` stores the number of valid ways for the previous two positions.
* For every new position, I try all possible values `c`.
* A transition is allowed only when the corresponding characters satisfy the condition checked by `allowed()`.
* The states are updated for every position.
* Finally, all valid states are summed to obtain the answer.

### Complexity

* **Time:** `O(N)`
* **Space:** `O(1)` since only a `2 × 2` DP table is maintained.

### File

`DOMINO.cpp`

### Code

```cpp
#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

bool allowed(char c, int v) {
    if (c == '?') return true;
    return (c - '0') == v;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        char buf[200005];
        scanf("%s", buf);
        string s(buf);

        long long dp[2][2] = {{0, 0}, {0, 0}};

        // Initialize with first two tiles
        for (int v0 = 0; v0 < 2; v0++) {
            if (!allowed(s[0], v0)) continue;

            for (int v1 = 0; v1 < 2; v1++) {
                if (!allowed(s[1], v1)) continue;

                dp[v0][v1] += 1;
            }
        }

        for (int i = 2; i < n; i++) {
            long long ndp[2][2] = {{0, 0}, {0, 0}};

            for (int a = 0; a < 2; a++) {
                for (int b = 0; b < 2; b++) {
                    if (dp[a][b] == 0) continue;

                    for (int c = 0; c < 2; c++) {
                        if (!allowed(s[i], c)) continue;

                        if ((a + b) > (b + c)) {
                            ndp[b][c] =
                                (ndp[b][c] + dp[a][b]) % MOD;
                        }
                    }
                }
            }

            memcpy(dp, ndp, sizeof(dp));
        }

        long long ans = 0;

        for (int a = 0; a < 2; a++) {
            for (int b = 0; b < 2; b++) {
                ans = (ans + dp[a][b]) % MOD;
            }
        }

        printf("%lld\n", ans);
    }

    return 0;
}
```

### Key Learning

This problem is a good example of how a **constant-sized DP state** can reduce a seemingly complex sequence problem to an `O(N)` solution.
