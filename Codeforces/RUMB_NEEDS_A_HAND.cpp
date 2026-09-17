📄 **RUMB_NEEDS_A_HAND.cpp**

**Codeforces Round 1121 (Div. 2) – A. Rumb Needs a Hand**
**Problem:** 2264A
**Platform:** Codeforces
**Language:** C++

### 📝 Problem

Given a permutation, determine whether it can be sorted by reversing the elements at a chosen set of indices exactly once.

### 💡 Approach

* Find all positions where `p[i] != i + 1`.
* These misplaced elements must be selected.
* Reverse the values at these positions.
* If the resulting sequence of misplaced values matches their required order, the permutation can be sorted.
* An already sorted permutation is also valid by choosing any single index.

### ⏱️ Complexity

* **Time:** O(N)
* **Space:** O(N)

### 💻 C++ Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n);

        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        vector<int> a, b;

        for (int i = 0; i < n; i++) {
            if (p[i] != i + 1) {
                a.push_back(p[i]);
                b.push_back(i + 1);
            }
        }

        reverse(a.begin(), a.end());

        if (a == b) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
```
