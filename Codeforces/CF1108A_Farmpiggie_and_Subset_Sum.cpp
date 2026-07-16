# 🚀 Farmpiggie and Subset Sum | Codeforces Round 1108 (Div. 2) - Problem A

## 📝 Problem Statement
Given an integer **N**, construct a permutation of numbers from **1** to **N** such that the required subset sum condition is satisfied.

---

## 🔍 Intuition
A simple pattern works for every valid input:
- Process the numbers in pairs.
- For every pair `(i, i+1)`, output them as `(i+1, i)`.
- This swaps every adjacent pair while maintaining a valid permutation.

For example:
- `N = 2` → `2 1`
- `N = 4` → `2 1 4 3`
- `N = 6` → `2 1 4 3 6 5`

---

## ⚡ Approach
1. Read the value of `N`.
2. Traverse the numbers from `1` to `N` with a step of `2`.
3. For each pair, print `i + 1` followed by `i`.
4. Print the resulting permutation.

---

## 💻 Code

```cpp
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i += 2) {
        cout << i + 1 << " " << i << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
```

---

## 📊 Complexity Analysis
- **Time Complexity:** `O(N)` per test case
- **Space Complexity:** `O(1)`

---

## 🎯 Key Takeaway
By simply swapping every adjacent pair `(1,2)`, `(3,4)`, `(5,6)`, ... we can directly construct the required permutation in linear time without any extra data structures.
