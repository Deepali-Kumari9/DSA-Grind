📄 **MONOCARP_S_CONTEST.cpp**

**Codeforces – A. Monocarp's Contest**

**Problem:**
Given an array, determine whether it can satisfy the required condition based on the number of zeroes and their positions.

**💡 Approach:**

* Count the number of `0`s in the array.
* If there are no zeroes, print `-1`.
* Check whether the first and last elements are `0`.
* Based on the positions of the zeroes, determine whether the answer is `0`, `1`, `2`, or `-1`.

**⏱️ Complexity:**
Time: `O(N)`
Space: `O(N)`

**💻 C++ Solution:**

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        int cnt0 = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 0)
                cnt0++;
        }

        if (cnt0 == 0) {
            cout << -1 << "\n";
            continue;
        }

        bool firstEasy = (a[0] == 0);
        bool lastEasy = (a[n - 1] == 0);

        if (firstEasy && lastEasy) {
            cout << 0 << "\n";
        }
        else if (firstEasy || lastEasy) {
            cout << (cnt0 >= 2 ? 1 : -1) << "\n";
        }
        else {
            cout << (cnt0 >= 2 ? 2 : -1) << "\n";
        }
    }

    return 0;
}
```
