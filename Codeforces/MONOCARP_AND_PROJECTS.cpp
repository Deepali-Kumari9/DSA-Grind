📄 **MONOCARP_AND_PROJECTS.cpp**

**Codeforces – B. Monocarp and Projects**

**Problem:**
Given `x`, `y`, and `k`, calculate the total value based on the arithmetic progression of possible project values from `x` to `x + k - 1`, where the contribution depends on the constant difference `d = y - x`.

**💡 Approach:**

* Calculate `d = y - x`.
* For values `a ≤ d`, directly add `d % a`.
* For values `a > d`, `d % a = d`, so count how many such values exist and add their total contribution.
* This avoids unnecessary calculations for the larger values.

**⏱️ Complexity:**
Time: `O(min(d, k))`
Space: `O(1)`

**💻 C++ Solution:**

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long x, y, k;
        scanf("%lld %lld %lld", &x, &y, &k);

        long long d = y - x;
        long long lo = x;
        long long hi = x + k - 1;
        long long total = 0;

        // Part 1: a <= d
        long long hb = min(hi, d);

        for (long long a = lo; a <= hb; a++) {
            total += d % a;
        }

        // Part 2: a > d, so d % a = d
        long long largeStart = max(lo, d + 1);

        if (hi >= largeStart) {
            long long cnt = hi - largeStart + 1;
            total += cnt * d;
        }

        printf("%lld\n", total);
    }

    return 0;
}
```
