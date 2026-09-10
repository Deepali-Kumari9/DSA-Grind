📄 **SPLIT_A_STRING_IN_BALANCED_STRINGS.cpp**

**LeetCode 1221 – Split a String in Balanced Strings**

**Problem:**
Given a balanced string containing `L` and `R`, split it into the maximum number of balanced substrings.

**💡 Approach:**

* Maintain a counter `count`.
* Increase it for `L` and decrease it for `R`.
* Whenever `count` becomes `0`, one balanced substring is completed.
* Count all such balanced substrings.

**⏱️ Complexity:**
Time: `O(N)`
Space: `O(1)`

**💻 C++ Solution:**

```cpp
class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0;
        int ans = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'L') {
                count++;
            } else {
                count--;
            }

            if (count == 0) {
                ans++;
            }
        }

        return ans;
    }
};
```
