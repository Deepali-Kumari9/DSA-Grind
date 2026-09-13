📄 **YES_OR_YES.cpp**

**Codeforces Round 806 (Div. 4), A – YES or YES?**
**Platform:** Codeforces
**Language:** C++17

### 📝 Problem

Given a string of length 3, check whether it represents `"YES"` regardless of the case of its letters.

### 💡 Approach

* Convert all three characters to uppercase.
* Compare the resulting string with `"YES"`.
* Print `YES` if they match, otherwise print `NO`.

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

        for (int i = 0; i < 3; i++) {
            s[i] = toupper(s[i]);
        }

        if (s == "YES")
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
```
