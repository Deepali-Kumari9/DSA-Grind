# A_I_Love_Username.cpp

## 📌 Problem
**A. I_love_%username%**  
Codeforces Round 109 (Div. 2)

## 💡 Approach
- Read the number of contests `n`.
- Store the first score as both the current **best** and **worst** performance.
- Traverse the remaining scores:
  - If the current score is greater than the best score, update the best score and increment the count.
  - If the current score is smaller than the worst score, update the worst score and increment the count.
- Output the total count of amazing performances.

## ⏱️ Complexity
- **Time:** O(n)
- **Space:** O(n)

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int s[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    int count = 0;
    int best = s[0];
    int worst = s[0];

    for (int i = 1; i < n; i++) {
        if (s[i] > best) {
            count++;
            best = s[i];
        } else if (s[i] < worst) {
            count++;
            worst = s[i];
        }
    }

    cout << count;
    return 0;
}
```
