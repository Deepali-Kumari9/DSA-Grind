🚀 **Codeforces Round 1119 (Div. 3) — Problem A: Moo Language School**

Solved **A. Moo Language School** ✅

💡 **Approach:**
I divided the string into groups of size `k` and checked whether every character in each group is `'1'`. If all characters are `'1'`, that group contributes to the answer.

⏱️ **Time Complexity:** `O(n)`
💾 **Space Complexity:** `O(1)`

**C++ Solution:**

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int ans = 0;

        for (int i = 0; i < n; i += k) {
            bool allOne = true;

            for (int j = i; j < i + k; j++) {
                if (s[j] == '0') {
                    allOne = false;
                    break;
                }
            }

            if (allOne)
                ans++;
        }

        cout << ans << endl;
    }

    return 0;
}
```

#Codeforces #CompetitiveProgramming #DSA #CPlusPlus #Div3 #ProblemSolving
