# LeetCode 279 — Perfect Squares

### Problem

Given an integer `n`, return the **least number of perfect square numbers** that sum to `n`.

For example, `12 = 4 + 4 + 4`, so the answer is `3`.

### Approach

I used **Dynamic Programming**.

* `dp[i]` represents the minimum number of perfect squares needed to form `i`.
* Initialize every value with `INT_MAX`.
* For every `i` from `1` to `n`, try every perfect square `j*j <= i`.
* The transition is:

`dp[i] = min(dp[i], dp[i - j*j] + 1)`

Finally, `dp[n]` gives the minimum number of perfect squares.

### Complexity

* **Time:** `O(n√n)`
* **Space:** `O(n)`

### File

`PerfectSquares.cpp`

### Code

```cpp
class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n + 1, INT_MAX);

        dp[0] = 0;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j * j <= i; j++) {
                dp[i] = min(dp[i], dp[i - j * j] + 1);
            }
        }

        return dp[n];
    }
};
```

### Example

For `n = 12`:

`12 = 4 + 4 + 4`

Therefore, the answer is **3**.

### Key Learning

This is a classic **1D Dynamic Programming** problem where we build the answer for every smaller value and use those results to calculate the answer for `n`.
