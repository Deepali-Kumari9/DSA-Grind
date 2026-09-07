## LeetCode 231 — Power of Two

Solved **Power of Two** ✅

### 💡 Approach

A number is a power of two if it has **exactly one set bit** in its binary representation.

We can use the bit manipulation trick:

`n & (n - 1) == 0`

For powers of two, this expression is `0`. We also need `n > 0` because `0` is not a power of two.

### ⏱️ Complexity

* **Time:** `O(1)`
* **Space:** `O(1)`

### 💻 C++ Solution

```cpp
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n > 0 && ((n & (n - 1)) == 0)) {
            return true;
        }
        return false;
    }
};
```

**📁 File Name:** `POWER_OF_TWO.cpp`

**Topic:** Bit Manipulation
**Difficulty:** Easy
**Platform:** LeetCode

#LeetCode #DSA #BitManipulation #CPlusPlus #ProblemSolving
