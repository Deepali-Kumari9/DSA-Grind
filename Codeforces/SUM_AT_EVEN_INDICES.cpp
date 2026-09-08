📄 **SUM_AT_EVEN_INDICES.cpp**

**CodeChef – Sum at Even Indices**

**Problem:**
Given an array of N integers and K, consider only elements at even indices (0-based). Find the sum of elements that are strictly greater than `2K`.

**💡 Approach:**

* Traverse the array.
* Check if the index is even.
* If `A[i] > 2 × K`, add it to the sum.

**⏱️ Complexity:**
Time: `O(N)`
Space: `O(1)`

**💻 C++17 Solution:**

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    long long sum = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (i % 2 == 0 && x > 2 * k) {
            sum += x;
        }
    }

    cout << sum << endl;

    return 0;
}
```
