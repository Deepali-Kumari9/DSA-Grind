# 🚀 Codeforces Round 1113 (Div. 2) — Problem A: You Delete It, I Delete It

🔹 **Problem:** You Delete It, I Delete It
🔹 **Contest:** Codeforces Round 1113 (Div. 2)
🔹 **Problem:** A
🔹 **Language:** C++
🔹 **Status:** ✅ Accepted

### 💡 Approach

The string contains only `0` and `1`.

* Find the first occurrence of `0` and remove it.
* Then find the first occurrence of `1` and remove it.
* Print the resulting string.

The `erase()` function is used to remove the characters directly from the string.

### ⏱️ Complexity

* **Time:** `O(n)` per test case
* **Space:** `O(1)` apart from the input string

### 💻 Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int pos0 = s.find('0');
        s.erase(pos0, 1);

        int pos1 = s.find('1');
        s.erase(pos1, 1);

        cout << s << '\n';
    }

    return 0;
}
```

### 📌 Key Takeaway

A simple string manipulation problem that focuses on finding and removing specific characters efficiently.

#Codeforces #CompetitiveProgramming #DSA #CPlusPlus #ProblemSolving #100DaysOfCode
