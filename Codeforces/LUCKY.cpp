📄 **LUCKY.cpp**

**Codeforces 790A – Lucky?**
**Platform:** Codeforces
**Language:** C++17

### 📝 Problem

Given a 6-digit string, check whether the sum of the first three digits is equal to the sum of the last three digits.

### 💡 Approach

* Add the first 3 digits.
* Add the last 3 digits.
* If both sums are equal, print `YES`; otherwise, print `NO`.

### ⏱️ Complexity

* **Time:** O(1)
* **Space:** O(1)

### 💻 C++ Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int sum1 = 0, sum2 = 0;

        for (int i = 0; i < 3; i++) {
            sum1 += s[i] - '0';
        }

        for (int i = 3; i < 6; i++) {
            sum2 += s[i] - '0';
        }

        if (sum1 == sum2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
```
