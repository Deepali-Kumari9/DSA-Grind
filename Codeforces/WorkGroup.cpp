```cpp
/*
    Problem: Work Group
    Platform: Codeforces
    Contest: VK Cup 2015 - Round 2
    Language: C++17

    Approach:
    - Use Tree Dynamic Programming on the company hierarchy.
    - Each employee is represented as a node in a tree, with employee 1
      being the root.
    - Maintain two DP states for every subtree based on the parity of the
      selected employees.
    - g[v][0] and g[v][1] store the best possible value for the processed
      part of the subtree with the corresponding parity.
    - f[v][0] and f[v][1] represent the two possible states after processing
      employee v.
    - Process employees from n down to 1 so that a child's contribution is
      merged into its parent.
    - For every parent-child relationship, combine the two parity states
      using maximum values.
    - Finally, the answer is the maximum value obtainable at the root.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> par(n + 1);
    vector<long long> a(n + 1);

    const long long NEG = LLONG_MIN / 2;

    vector<array<long long, 2>> g(n + 1, {0, NEG});
    vector<array<long long, 2>> f(n + 1, {0, NEG});

    for (int i = 1; i <= n; i++) {
        cin >> par[i] >> a[i];
    }

    for (int v = n; v >= 1; v--) {
        f[v][0] = g[v][0];
        f[v][1] = max(g[v][1], g[v][0] + a[v]);

        if (v == 1)
            break;

        int p = par[v];

        long long ng0 = max(
            g[p][0] + f[v][0],
            g[p][1] + f[v][1]
        );

        long long ng1 = max(
            g[p][0] + f[v][1],
            g[p][1] + f[v][0]
        );

        g[p][0] = ng0;
        g[p][1] = ng1;
    }

    cout << max(f[1][0], f[1][1]) << '\n';

    return 0;
}
```

**GitHub file name:** `WorkGroup.cpp`
