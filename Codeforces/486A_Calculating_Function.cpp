# A. Calculating Function

## 📌 Problem
Given an integer `n`, calculate the value of:

\[
f(n) = 1 - 2 + 3 - 4 + \cdots \pm n
\]

where odd numbers are added and even numbers are subtracted.

---

## 💡 Approach
Instead of iterating through all numbers, observe the pattern:

- If `n` is **even**, the result is `n / 2`.
- If `n` is **odd**, the result is `-(n + 1) / 2`.

This gives an **O(1)** solution.

---

## ✅ C++ Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n % 2 == 0)
        cout << n / 2;
    else
        cout << -(n + 1) / 2;

    return 0;
}
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(1)`
- **Space Complexity:** `O(1)`

---

## 🏷️ Tags
`Math` `Implementation` `Number Theory`
