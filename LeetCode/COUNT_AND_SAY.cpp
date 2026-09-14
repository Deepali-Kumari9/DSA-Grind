📄 **COUNT_AND_SAY.cpp**

**LeetCode 38 – Count and Say**
**Platform:** LeetCode
**Language:** C++17

### 📝 Problem

Generate the `n`th term of the Count and Say sequence. Each term describes the consecutive groups of digits in the previous term.

### 💡 Approach

* Start with `"1"`.
* For each next term, scan the current string and count consecutive identical digits.
* Append the count followed by the digit.
* Repeat until reaching the `n`th term.

### ⏱️ Complexity

* **Time:** O(N × L), where `L` is the length of the generated sequence
* **Space:** O(L)

### 💻 C++ Solution

```cpp
class Solution {
public:
    string countAndSay(int n) {
        string s = "1";

        for (int i = 2; i <= n; i++) {
            string ans = "";
            int j = 0;

            while (j < s.size()) {
                char digit = s[j];
                int count = 0;

                while (j < s.size() && s[j] == digit) {
                    count++;
                    j++;
                }

                ans += to_string(count);
                ans += digit;
            }

            s = ans;
        }

        return s;
    }
};
```
