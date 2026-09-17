📄 **SHARING_COOKIES.cpp**

**CodeChef – Sharing Cookies**
**Problem:** SHARING
**Platform:** CodeChef
**Language:** C++

### 📝 Problem

Alice has `A` cookies and Bob has `B` cookies, with `A > B`. Find the number of cookies Alice needs to give Bob so that both have an equal number. If it is impossible, print `-1`.

### 💡 Approach

* The total number of cookies is `A + B`.
* If the total is even, both can have `(A + B) / 2`.
* Alice needs to give `A - (A + B)/2 = (A - B)/2` cookies.
* If the total is odd, equal sharing is impossible.

### ⏱️ Complexity

* **Time:** O(1)
* **Space:** O(1)

### 💻 C++ Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    if ((A + B) % 2 == 0) {
        cout << (A - B) / 2;
    } else {
        cout << -1;
    }

    return 0;
}
```
