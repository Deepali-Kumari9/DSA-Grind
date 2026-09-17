📄 **REPEATED_STRING_MATCH.cpp**

**LeetCode 686 – Repeated String Match**
**Platform:** LeetCode
**Language:** C++

### 📝 Problem

Given two strings `a` and `b`, find the minimum number of times `a` must be repeated so that `b` becomes a substring of the repeated string. Return `-1` if impossible.

### 💡 Approach

* Keep appending `a` until the length of the repeated string is at least the length of `b`.
* Check whether `b` is already a substring.
* If not, append `a` one more time and check again.
* If still not found, return `-1`.

### ⏱️ Complexity

* **Time:** O(N × M) in the worst case
* **Space:** O(N)

### 💻 C++ Solution

```cpp
class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string s = "";
        int count = 0;

        while (s.length() < b.length()) {
            s += a;
            count++;
        }

        if (s.find(b) != string::npos) {
            return count;
        }

        s += a;
        count++;

        if (s.find(b) != string::npos) {
            return count;
        }

        return -1;
    }
};
```
