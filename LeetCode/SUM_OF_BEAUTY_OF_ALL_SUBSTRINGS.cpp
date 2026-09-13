📄 **SUM_OF_BEAUTY_OF_ALL_SUBSTRINGS.cpp**

**LeetCode 1781 – Sum of Beauty of All Substrings**
**Platform:** LeetCode
**Language:** C++17

### 📝 Problem

For every substring of `s` with length at least 3, its beauty is the difference between the highest and lowest frequency of any character that appears in it. Return the sum of the beauty of all substrings.

### 💡 Approach

* Start from every index `i` as the beginning of a substring.
* Extend the substring using `j` and maintain the frequency of each character.
* For every substring of length at least 3:

  * Find the maximum frequency.
  * Find the minimum non-zero frequency.
  * Add `max - min` to the answer.

### ⏱️ Complexity

* **Time:** O(N² × 26) ≈ O(N²)
* **Space:** O(26) = O(1)

### 💻 C++ Solution

```cpp
class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            int freq[26] = {0};

            for (int j = i; j < n; j++) {
                freq[s[j] - 'a']++;

                if (j - i + 1 >= 3) {
                    int maxi = 0;
                    int mini = INT_MAX;

                    for (int k = 0; k < 26; k++) {
                        if (freq[k] > 0) {
                            maxi = max(maxi, freq[k]);
                            mini = min(mini, freq[k]);
                        }
                    }

                    ans += maxi - mini;
                }
            }
        }

        return ans;
    }
};
```
