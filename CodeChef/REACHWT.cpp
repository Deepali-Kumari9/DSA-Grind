## CodeChef – Reach Weight 🚀

**Problem:** Reach Weight
**Problem Code:** REACHWT
**Platform:** CodeChef
**Language:** C++

### 💡 Approach

* We can buy either a **1 kg weight for ₹20** or a **2 kg weight for ₹30**.
* For an even `N`, buying `N/2` two-kg weights gives the minimum cost.
* For an odd `N`, buy `(N/2)` two-kg weights and one 1-kg weight.

### ⏱️ Complexity

* **Time:** O(1) per test case
* **Space:** O(1)

### 💻 Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        if (N % 2 == 0) {
            cout << (N / 2) * 30 << endl;
        }
        else {
            cout << (N / 2) * 30 + 20 << endl;
        }
    }

    return 0;
}
```

📌 **Key Learning:** This problem is a simple greedy/observation-based problem where choosing the cheaper combination for every 2 kg leads to the minimum cost.

#CodeChef #DSA #CompetitiveProgramming #CPlusPlus #ProblemSolving #Coding
