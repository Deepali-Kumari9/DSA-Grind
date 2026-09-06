## CodeChef — Right There

**Problem Code:** RIGHTTHERE

### 💡 Approach

Chef wants to host `N` people, while the party hall can accommodate `X` people.

* If `N <= X`, print `YES`.
* Otherwise, print `NO`.

### ⏱️ Complexity

* **Time:** `O(1)`
* **Space:** `O(1)`

### 💻 C++ Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X;

        if (N <= X)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
```

**Topic:** Basic Math, Conditional Statements
**Difficulty:** Easy
**Platform:** CodeChef
