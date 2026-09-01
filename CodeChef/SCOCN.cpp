# 🚀 DSA Practice – Second Occurrence | CodeChef

Solved **Second Occurrence (SCOCN)** on CodeChef ✅

### 🧩 Problem

Given an array of `N` integers and an integer `X`, find the **0-based index of the second occurrence** of `X`.

* If `X` does not appear → print `-1`
* If `X` appears exactly once → print `-2`
* Otherwise → print the index of its second occurrence.

### 💡 Approach

* Traverse the array once.
* Keep a counter for the occurrences of `X`.
* When the second occurrence is found, immediately print its index.
* After the loop:

  * `0 occurrences → -1`
  * `1 occurrence → -2`

### ⏱️ Complexity

* **Time:** `O(N)`
* **Space:** `O(N)`

### 💻 C++ Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int X;
    cin >> X;

    int count = 0;

    for (int i = 0; i < N; i++) {
        if (A[i] == X) {
            count++;

            if (count == 2) {
                cout << i << endl;
                return 0;
            }
        }
    }

    if (count == 0)
        cout << -1 << endl;
    else
        cout << -2 << endl;

    return 0;
}
```

### 📌 Key Takeaway

This was a simple but useful practice problem for **array traversal, occurrence counting, and early termination**.

#DSA #CodeChef #CPP #CPlusPlus #ProblemSolving #CompetitiveProgramming #DSAPractice
