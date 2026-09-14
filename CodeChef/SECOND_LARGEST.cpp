📄 **SECOND_LARGEST.cpp**

**CodeChef – Second Largest (FLOW017)**
**Platform:** CodeChef
**Language:** C++17

### 📝 Problem

Given three integers `A`, `B`, and `C`, find the second largest among them.

### 💡 Approach

* Compare the three numbers using their relative order.
* The middle value among the three is the second largest.
* Print that value for each test case.

### ⏱️ Complexity

* **Time:** O(1) per test case
* **Space:** O(1)

### 💻 C++ Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;

        if ((A >= B && A <= C) || (A >= C && A <= B)) {
            cout << A << endl;
        }
        else if ((B >= A && B <= C) || (B >= C && B <= A)) {
            cout << B << endl;
        }
        else {
            cout << C << endl;
        }
    }

    return 0;
}
```
