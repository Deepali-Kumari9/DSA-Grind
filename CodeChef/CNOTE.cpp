## CodeChef — Chef and Notebooks

**Problem Code:** CNOTE
**Language:** C++

### 💡 Approach

Chef needs a notebook with at least `X` pages and a price of at most `K`.

For each notebook:

* Check whether `P >= X` (enough pages).
* Check whether `C <= K` (within budget).
* If any notebook satisfies both conditions, print `"LuckyChef"`.
* Otherwise, print `"UnluckyChef"`.

### ⏱️ Complexity

* **Time:** O(N) per test case
* **Space:** O(1)

### 💻 C++ Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y, K, N;
        cin >> X >> Y >> K >> N;

        bool possible = false;

        for (int i = 0; i < N; i++) {
            int P, C;
            cin >> P >> C;

            if (P >= X && C <= K) {
                possible = true;
            }
        }

        if (possible)
            cout << "LuckyChef" << endl;
        else
            cout << "UnluckyChef" << endl;
    }

    return 0;
}
```

**Topic:** Arrays, Conditional Statements
**Difficulty:** Easy
**Platform:** CodeChef
