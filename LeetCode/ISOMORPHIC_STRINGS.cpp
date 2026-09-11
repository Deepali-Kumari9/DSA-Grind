📄 **ISOMORPHIC_STRINGS.cpp**

**LeetCode 205 – Isomorphic Strings**

**Problem:**
Given two strings `s` and `t`, determine whether they are isomorphic. Each character in `s` must map to exactly one character in `t`, and no two different characters can map to the same character.

**💡 Approach:**

* Maintain two mappings: `s → t` and `t → s`.
* For every pair of characters, check whether their existing mappings are consistent.
* If either mapping conflicts, return `false`.
* If all characters match consistently, return `true`.

**⏱️ Complexity:**
Time: `O(N)`
Space: `O(1)`

**💻 C++ Solution:**

```cpp
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> mp1(256, -1);
        vector<int> mp2(256, -1);

        for (int i = 0; i < s.size(); i++) {
            char a = s[i];
            char b = t[i];

            // s -> t
            if (mp1[a] == -1) {
                mp1[a] = b;
            }
            else if (mp1[a] != b) {
                return false;
            }

            // t -> s
            if (mp2[b] == -1) {
                mp2[b] = a;
            }
            else if (mp2[b] != a) {
                return false;
            }
        }

        return true;
    }
};
```
