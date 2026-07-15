# 🚀 Off By One | CodeChef

## 📝 Problem Statement
A calculator has a strange bug—it appends an extra digit **1** at the end of every result. Given two integers **A** and **B**, determine the number that the calculator displays after computing their sum.

---

## 🔍 Intuition
Instead of simply printing `A + B`, the calculator shifts the result one digit to the left and appends `1`.

For example:
- `3 + 5 = 8` → Calculator prints `81`
- `4 + 12 = 16` → Calculator prints `161`

---

## ⚡ Approach
1. Read the integers `A` and `B`.
2. Compute their sum.
3. Multiply the sum by `10`.
4. Add `1` to append the extra digit.
5. Print the final result.

---

## 💻 Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    cout << (A + B) * 10 + 1;

    return 0;
}
```

---

## 📊 Complexity Analysis
- **Time Complexity:** `O(1)`
- **Space Complexity:** `O(1)`

---

## 🎯 Key Takeaway
This is a straightforward implementation problem where understanding the calculator's behavior is the key. Once the pattern is recognized, the solution requires only a simple arithmetic expression.
