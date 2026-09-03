# CodeChef – Maximum Sum

**Problem:** Maximum Sum
**Problem Code:** MAXSUM77
**Platform:** CodeChef
**Language:** C++

### Approach

After removing the first or last element `K` times, the remaining elements will always form a **contiguous subarray of length `N-K`**.

So, we check every possible contiguous subarray of length `N-K` and calculate its sum. The maximum sum among them is the answer.

### Complexity

* **Time:** O(N)
* **Space:** O(N)

### Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<int> A(N);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int len = N - K;
        int sum = 0;

        for (int i = 0; i < len; i++) {
            sum += A[i];
        }

        int ans = sum;

        for (int i = len; i < N; i++) {
            sum += A[i];
            sum -= A[i - len];
            ans = max(ans, sum);
        }

        cout << ans << endl;
    }

    return 0;
}
```

**Topics:** Arrays, Sliding Window, Prefix/Contiguous Subarray
