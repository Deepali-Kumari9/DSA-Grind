```cpp
/*
    Problem: A. Boss Fight
    Contest: Codeforces Round 1115 (Div. 2)

    Approach:
    - Count the frequency of every value in the array.
    - Let bestVal be the value with the highest frequency.
    - Suppose its frequency is bestFreq.
    - The total number of attacks/damage points is stored in total.
    - The maximum useful contribution is determined by the most frequent value.
    - Calculate the wasted amount and subtract it from total.

    Time Complexity: O(N)
    Space Complexity: O(N)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        map<int, int> freq;

        long long total = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total += a[i];
            freq[a[i]]++;
        }

        int bestVal = 0, bestFreq = 0;

        for (auto &[val, f] : freq) {
            if (f > bestFreq) {
                bestFreq = f;
                bestVal = val;
            }
        }

        long long L = 2LL * bestFreq - n;
        long long wasted = max(0LL, L - 2) * (long long)bestVal;

        cout << total - wasted << '\n';
    }

    return 0;
}
```

**GitHub file name:** `BossFight.cpp`
