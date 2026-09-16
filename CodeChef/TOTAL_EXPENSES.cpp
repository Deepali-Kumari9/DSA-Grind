📄 **TOTAL_EXPENSES.cpp**

**CodeChef – Total Expenses**
**Platform:** CodeChef
**Language:** C++17

**Problem:**
Calculate the total expense for buying `quantity` items at a given price. If the quantity is more than `1000`, a **10% discount** is applied.

💡 **Approach:**

* Calculate `quantity × price`.
* If quantity is greater than `1000`, multiply the total by `0.9`.
* Print the final expense with 6 decimal places.

⏱️ **Complexity:**

* Time: `O(1)`
* Space: `O(1)`

💻 **C++ Solution:**

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        double q, p;
        cin >> q >> p;

        double total = q * p;

        if (q > 1000) {
            total *= 0.9;
        }

        cout << fixed << setprecision(6) << total << endl;
    }

    return 0;
}
```
