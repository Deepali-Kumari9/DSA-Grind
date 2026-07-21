# 1328. Break a Palindrome

## 📌 Problem
Given a palindromic string, replace exactly one character so that the resulting string is **not** a palindrome and is the **lexicographically smallest** possible.

Return the modified string. If it is impossible (e.g., the string length is 1), return an empty string.

---

## 💡 Approach
- If the string has only one character, it is impossible to break the palindrome.
- Traverse only the **first half** of the string.
- Replace the first character that is not `'a'` with `'a'`.
- If every character in the first half is `'a'`, replace the last character with `'b'`.

This guarantees the lexicographically smallest non-palindrome.

---

## ✅ C++ Solution

```cpp
class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n = palindrome.size();

        if (n == 1)
            return "";

        for (int i = 0; i < n / 2; i++) {
            if (palindrome[i] != 'a') {
                palindrome[i] = 'a';
                return palindrome;
            }
        }

        palindrome[n - 1] = 'b';
        return palindrome;
    }
};
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## 🏷️ Tags
`String` `Greedy`
