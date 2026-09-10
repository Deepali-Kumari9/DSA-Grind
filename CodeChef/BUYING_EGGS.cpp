📄 **BUYING_EGGS.cpp**

**CodeChef – Buying Eggs (EGGBUY)**

**Problem:**
You need to buy exactly 12 eggs. The first shop sells each egg for `X` coins, while the second shop sells each egg for `Y` coins but requires an additional fuel cost `F`. Find the minimum possible cost.

**💡 Approach:**

* Calculate the cost from the first shop: `12 × X`.
* Calculate the cost from the second shop including fuel: `12 × Y + F`.
* Take the minimum of the two costs.

**⏱️ Complexity:**
Time: `O(1)`
Space: `O(1)`

**💻 C++ Solution:**

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y, F;
    cin >> X >> Y >> F;

    cout << min(12 * X, 12 * Y + F);

    return 0;
}
```
