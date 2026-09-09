📄 **JEWELS_AND_STONES.cpp**

**LeetCode 771 – Jewels and Stones**

**Problem:**
Given two strings, `jewels` represents the types of stones that are jewels, while `stones` represents the stones you have. Find how many stones are also jewels.

**💡 Approach:**

* Store all characters from `jewels` in an `unordered_set`.
* Traverse `stones` and check whether each character exists in the set.
* Increment the answer whenever a match is found.

**⏱️ Complexity:**
Time: `O(J + S)`
Space: `O(J)`

**💻 C++ Solution:**

```cpp
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> s;

        for(char c : jewels) {
            s.insert(c);
        }

        int ans = 0;

        for(char c : stones) {
            if(s.count(c)) {
                ans++;
            }
        }

        return ans;
    }
};
```
