# 2108. Find First Palindromic String in the Array

## 📌 Problem Statement
Given an array of strings `words`, return the **first palindromic string** in the array. If no such string exists, return an empty string.

A palindrome is a string that reads the same forward and backward.

🔗 **Problem Link:** https://leetcode.com/problems/find-first-palindromic-string-in-the-array/

---

## 💡 Approach
- Traverse the array of strings one by one.
- For each string, use the **two-pointer technique**:
  - Compare characters from both ends.
  - If any pair doesn't match, it is not a palindrome.
- Return the first string that satisfies the palindrome condition.
- If no palindrome exists, return an empty string.

---

## ✅ C++ Solution

```cpp
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (const string& w : words) {
            int left = 0, right = w.size() - 1;
            bool isPalin = true;

            while (left < right) {
                if (w[left] != w[right]) {
                    isPalin = false;
                    break;
                }
                left++;
                right--;
            }

            if (isPalin) {
                return w;
            }
        }

        return "";
    }
};
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n × m)`
  - `n` = number of strings
  - `m` = average length of each string
- **Space Complexity:** `O(1)`

---

## 🎯 Key Concepts
- Two Pointers
- String Traversal
- Palindrome Checking

---

### ⭐ If you found this solution helpful, consider giving this repository a star!
