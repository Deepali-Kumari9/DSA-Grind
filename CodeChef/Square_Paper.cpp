# 🚀 Square Paper | CodeChef

## 📝 Problem Statement
You are given the dimensions of a rectangular sheet of paper with sides **A** and **B**. Your task is to determine the area of the **largest square** that can be cut from the rectangle using only horizontal or vertical cuts.

---

## 🔍 Intuition
The side length of the largest possible square is limited by the **smaller** dimension of the rectangle. Therefore, the required area is simply the square of the minimum of `A` and `B`.

For example:
- `A = 2`, `B = 3` → Largest square side = `2` → Area = `4`
- `A = 4`, `B = 3` → Largest square side = `3` → Area = `9`

---

## ⚡ Approach
1. Read the integers `A` and `B`.
2. Find the smaller of the two values.
3. Square that value to get the maximum square area.
4. Print the result.

---

## 💻 Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    if (A * A < B * B)
        cout << A * A;
    else
        cout << B * B;

    return 0;
}
```

---

## 📊 Complexity Analysis
- **Time Complexity:** `O(1)`
- **Space Complexity:** `O(1)`

---

## 🎯 Key Takeaway
The largest square that can be cut from a rectangle always has its side equal to the **smaller** of the rectangle's two dimensions, making this a simple mathematical implementation problem.
