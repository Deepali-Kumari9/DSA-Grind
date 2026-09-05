## Codeforces Round 661 (Div. 3) — B. Gifts Fixing

### 💡 Approach

For every position, we need to reduce the gifts in arrays `a` and `b` until they reach their respective minimum values.

Let:

* `mina` = minimum value in `a`
* `minb` = minimum value in `b`

For each pair:

* `x = a[i] - mina`
* `y = b[i] - minb`

In one operation, we can decrease **both** values together, so we first use `min(x, y)` operations.

The remaining difference must then be handled with individual operations.

Therefore, the contribution is:

`min(x, y) + |x - y|`

### ⏱️ Complexity

* **Time:** O(n)
* **Space:** O(n)

### 💻 C++ Solution

```cpp id="gifts661"
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n), b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        long long mina = *min_element(a.begin(), a.end());
        long long minb = *min_element(b.begin(), b.end());

        long long ans = 0;

        for (int i = 0; i < n; i++) {
            long long x = a[i] - mina;
            long long y = b[i] - minb;

            ans += min(x, y);
            ans += abs(x - y);
        }

        cout << ans << '\n';
    }

    return 0;
}
```

**Topic:** Greedy, Arrays
**Difficulty:** Easy
**Problem:** B. Gifts Fixing
**Platform:** Codeforces
