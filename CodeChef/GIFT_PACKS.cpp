📄 **GIFT_PACKS.cpp**

**CodeChef – Gift Packs**
**Platform:** CodeChef
**Language:** C++17

**Problem:**
Given `A` notebooks and `B` pens, each gift pack needs one notebook and one pen. Find the maximum number of complete gift packs.

💡 **Approach:**

* Each pack needs 1 notebook and 1 pen.
* The number of complete packs is limited by whichever item is fewer.
* Answer = `min(A, B)`.

⏱️ **Complexity:**

* Time: `O(1)`
* Space: `O(1)`

💻 **C++ Solution:**

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    cout << min(A, B);

    return 0;
}
```
