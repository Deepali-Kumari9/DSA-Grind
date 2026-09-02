# 🚀 DSA Practice – Threshold Movement | Codeforces

Solved **Codeforces Round 1112 (Div. 2) – A. Threshold Movement** ✅

### 🧩 Problem

Given an array of values and a threshold `k`, determine whether there exists a valid threshold that allows every element to satisfy the required movement condition.

### 💡 Approach

* For each possible threshold, check whether all elements can satisfy the required condition.
* Instead of checking every possible value, generate only the **relevant candidate thresholds**:

  * `1`
  * Every `w[i]`
  * Every `w[i] + 1`
  * `max(w) + 1`
* Use a `set` to avoid duplicate candidates.
* For each candidate, run the `check()` function.
* If any candidate is valid, print `YES`; otherwise, print `NO`.

### ⏱️ Complexity

* **Time:** `O(N² + N log N)`
* **Space:** `O(N)`

### 💻 C++ Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

bool check(vector<long long>& w, long long k) {
    int n = w.size();
    vector<int> pos(n, 0);

    for (int i = 0; i < n; i++) {
        if (w[i] == k)
            return false;

        if (w[i] < k) {
            if (i == 0)
                return false;

            pos[i - 1]++;
        }
        else {
            if (i == n - 1)
                return false;

            pos[i + 1]++;
        }
    }

    for (int x : pos) {
        if (x != 1)
            return false;
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> w(n);

        for (auto &x : w)
            cin >> x;

        set<long long> candidates;
        candidates.insert(1);

        for (long long x : w) {
            candidates.insert(x);
            candidates.insert(x + 1);
        }

        candidates.insert(*max_element(w.begin(), w.end()) + 1);

        bool ans = false;

        for (long long k : candidates) {
            if (check(w, k)) {
                ans = true;
                break;
            }
        }

        cout << (ans ? "YES" : "NO") << '\n';
    }

    return 0;
}
```

### 📌 Key Takeaway

The main idea is **candidate reduction**: rather than testing every possible threshold, only values around the array elements need to be considered. This turns an otherwise large search into a manageable set of candidates.

#Codeforces #DSA #CPlusPlus #CompetitiveProgramming #ProblemSolving #DSAPractice
