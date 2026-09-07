## CodeChef — Astra Benchmark

Solved **Astra Benchmark** ✅

### 💡 Approach

The problem asks whether the combined score of **coding (A)** and **research (B)** is at least **X**.

Simply calculate `A + B` and check:

* If `A + B >= X` → print `YES`
* Otherwise → print `NO`

### ⏱️ Complexity

* **Time:** `O(1)`
* **Space:** `O(1)`

### 💻 C++ Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, X;
    cin >> A >> B >> X;

    if (A + B >= X) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
```

**📁 File Name:** `ASLAU.cpp`

**Topic:** Basic Math / Conditional Statements
**Difficulty:** Easy
**Platform:** CodeChef

#CodeChef #DSA #CompetitiveProgramming #CPlusPlus #ProblemSolving
