📄 **ADDITIVE_DISSONANCE.cpp**

**CodeChef – Additive Dissonance (ADDIS)**
**Platform:** CodeChef
**Language:** C++17

### 📝 Problem

Given an array `A`, choose an integer `X` and independently replace every element with either `Ai - X` or `Ai + X`. Find the minimum possible maximum frequency of any value in the resulting array `B`.

### 💡 Approach

* For a fixed `X`, equal values in `B` can only come from equal values in `A` or pairs differing by `2X`.
* The optimal answer is determined by the most frequent value in `A`.
* Each value can effectively be split into two groups, so the minimum possible maximum frequency is:
  `ceil(maxFrequency / 2)`.
* Count frequencies using a map and track the maximum frequency.

### ⏱️ Complexity

* **Time:** O(N) average per test case
* **Space:** O(N)

### 💻 C++ Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        map<int, int> mp;
        int ans = 0;

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;

            mp[x]++;
            ans = max(ans, mp[x]);
        }

        cout << (ans + 1) / 2 << endl;
    }

    return 0;
}
```
