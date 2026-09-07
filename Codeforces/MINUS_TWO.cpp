## Codeforces Round 1119 (Div. 3) — B. Minus Two

Solved **B. Minus Two** ✅

### 💡 Approach

For each number `x`:

* If `x` is odd, it contributes directly to the answer.
* If `x` is even, divide it by `2` and track whether the resulting value is even or odd.
* The maximum of these three counts gives the answer.

### ⏱️ Complexity

* **Time:** `O(n)` per test case
* **Space:** `O(1)`

### 💻 C++ Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        long long odd = 0, evenParity0 = 0, evenParity1 = 0;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;

            if (x % 2 != 0) {
                odd++;
            } else {
                long long e = x / 2;

                if (e % 2 == 0)
                    evenParity0++;
                else
                    evenParity1++;
            }
        }

        cout << max({odd, evenParity0, evenParity1}) << endl;
    }

    return 0;
}
```

**Topic:** Number Theory, Parity
**Difficulty:** Div. 3 — B
**Platform:** Codeforces

#Codeforces #CompetitiveProgramming #DSA #CPlusPlus #Div3 #ProblemSolving
