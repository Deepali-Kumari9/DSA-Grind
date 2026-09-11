📄 **UNEQUAL_SHUFFLE.cpp**

**CodeChef – Unequal Shuffle (UNQSHF)**
**Platform:** CodeChef
**Language:** C++17

### 📝 Problem

Given two binary strings `A` and `B` of length `N`, you can shuffle both strings independently. Determine whether they can be rearranged so that `A[i] ≠ B[i]` for every position.

### 💡 Approach

* Count the number of `'a'` characters in both strings.
* For every position to be different, the two strings must be complements.
* Therefore, the total number of `'a'` characters across both strings must be exactly `N`.
* If `countA + countB == N`, print `YES`; otherwise, print `NO`.

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
        int N;
        string A, B;

        cin >> N >> A >> B;

        int a = count(A.begin(), A.end(), 'a');
        int b = count(B.begin(), B.end(), 'a');

        cout << ((a + b == N) ? "YES" : "NO") << endl;
    }

    return 0;
}
```
