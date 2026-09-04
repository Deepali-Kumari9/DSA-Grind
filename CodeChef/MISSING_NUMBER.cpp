## CodeChef — Missing Number

### 💡 Approach

The numbers on the papers are **1, 2, 3, and 4**, so their total sum is:

`1 + 2 + 3 + 4 = 10`

Since the sum of the remaining papers is given as `S`, the missing number is:

`10 - S`

### ⏱️ Complexity

* **Time:** O(1)
* **Space:** O(1)

### 💻 C++ Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int S;
    cin >> S;

    cout << (4 + 3 + 2 + 1) - S << endl;

    return 0;
}
```

**Topic:** Basic Math
**Difficulty:** Easy
**Problem:** Missing Number
**Platform:** CodeChef
