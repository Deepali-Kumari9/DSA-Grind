📄 **TOO_MUCH_HOMEWORK.cpp**

**CodeChef – Too Much Homework! (HWFIN)**
**Platform:** CodeChef
**Language:** C++17

### 📝 Problem

Chef has already answered `X` questions. Each worksheet contains `Y` questions, and he can complete at most 10 worksheets. Determine whether he can answer at least 100 questions in total.

### 💡 Approach

* Maximum additional questions = `10 × Y`.
* Total possible questions = `X + 10 × Y`.
* If this is at least `100`, print `YES`; otherwise, print `NO`.

### ⏱️ Complexity

* **Time:** O(1)
* **Space:** O(1)

### 💻 C++ Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    if (X + 10 * Y >= 100)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
```
