## Codeforces Round 1119 (Div. 3) — C. 101

Solved **C. 101** ✅

### 💡 Approach

The goal is to maximize the length of a subarray that starts and ends with `1`, with only `0`s in between.

* Scan the array from left to right.
* Track the beginning of the current possible segment.
* Find the **longest valid segment** between two `1`s.
* For the selected segment, replace every `-1` with `0`, then set the two endpoints to `1`.
* Replace all remaining `-1`s with `0`.

This greedy approach ensures that the longest possible valid segment is obtained.

### ⏱️ Complexity

* **Time:** `O(n)`
* **Space:** `O(n)`

### 💻 C++ Solution

```cpp
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[200005];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int leftBound = -1;
        int bestScore = 0;
        int bestLeft = -1;
        int bestRight = -1;

        for (int j = 0; j < n; j++) {
            if (a[j] == 0) {
                continue;
            }

            if (leftBound == -1) {
                leftBound = j;
            }

            int currentScore = j - leftBound + 1;

            if (currentScore > bestScore) {
                bestScore = currentScore;
                bestLeft = leftBound;
                bestRight = j;
            }

            if (a[j] == 1) {
                leftBound = j;
            }
        }

        int ans[200005];

        for (int i = 0; i < n; i++) {
            if (a[i] == 1) {
                ans[i] = 1;
            } else {
                ans[i] = 0;
            }
        }

        if (bestScore > 0) {
            ans[bestLeft] = 1;
            ans[bestRight] = 1;
        }

        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }

        cout << "\n";
    }

    return 0;
}
```

**📁 File Name:** `101.cpp`

**Topic:** Greedy / Constructive Algorithms
**Difficulty:** 1000
**Platform:** Codeforces

#Codeforces #DSA #CompetitiveProgramming #Greedy #CPlusPlus #ProblemSolving
