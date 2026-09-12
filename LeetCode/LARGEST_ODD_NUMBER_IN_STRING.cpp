📄 **LARGEST_ODD_NUMBER_IN_STRING.cpp**

**LeetCode 1903 – Largest Odd Number in String**
**Platform:** LeetCode
**Language:** C++17

### 📝 Problem

Given a string representing a large integer, return the largest-valued odd number that is a non-empty substring of the string. Return an empty string if no odd number exists.

### 💡 Approach

* Traverse the string from right to left.
* The first odd digit found can be the last digit of the largest odd substring.
* Return the substring from the beginning up to that digit.
* If no odd digit exists, return `""`.

### ⏱️ Complexity

* **Time:** O(N)
* **Space:** O(N)

### 💻 C++ Solution

```cpp
class Solution {
public:
    string largestOddNumber(string num) {
        for (int i = num.size() - 1; i >= 0; i--) {
            if ((num[i] - '0') % 2 == 1) {
                return num.substr(0, i + 1);
            }
        }

        return "";
    }
};
```
