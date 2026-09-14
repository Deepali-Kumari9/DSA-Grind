📄 **REMOVE_SMALLEST.cpp**

**Codeforces Round 661 (Div. 3), A – Remove Smallest**
**Platform:** Codeforces
**Language:** C++17

### 📝 Problem

Given an array, determine whether it is possible to remove elements one by one such that whenever an element is removed, its value is no more than 1 greater than the smallest remaining element.

### 💡 Approach

* Sort the array.
* Check every pair of adjacent elements.
* If any difference is greater than `1`, it is impossible.
* Otherwise, print `YES`.

### ⏱️ Complexity

* **Time:** O(N log N)
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

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        bool ok = true;

        for (int i = 1; i < n; i++) {
            if (a[i] - a[i - 1] > 1) {
                ok = false;
                break;
            }
        }

        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
```
