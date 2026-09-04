## Codeforces Round 1105 (Div. 2) — A. Another Popcount Problem

### 💡 Approach

The idea is to process the value of `n` bit by bit using powers of 2.

For each power `p`:

* `n / p` tells us how many complete groups of size `p` are present.
* We can take at most `k` from these groups.
* Add the selected amount to the answer.
* Remove that amount from `n`.
* Continue with the next power of 2.

This effectively counts the maximum possible number of selected values while respecting the given limit `k`.

### ⏱️ Complexity

* **Time:** O(log n)
* **Space:** O(1)

### 💻 C++ Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        long long ans = 0;

        for (long long p = 1; p <= n; p *= 2) {
            long long take = min(k, n / p);

            ans += take;
            n -= take * p;

            if (p > n / 2 && p * 2 > n)
                break;
        }

        cout << ans << '\n';
    }

    return 0;
}
```

**Topic:** Bit Manipulation, Greedy
**Difficulty:** Easy
**Platform:** Codeforces
