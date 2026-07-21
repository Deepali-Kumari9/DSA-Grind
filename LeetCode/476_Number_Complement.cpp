# 476. Number Complement

## 📌 Problem
Given a positive integer, return its binary complement by flipping every bit in its binary representation (excluding leading zeros).

---

## 💡 Approach
- Build a bitmask containing all `1`s up to the most significant bit of the number.
- XOR the original number with this mask.
- The XOR operation flips all valid bits and produces the complement.

---

## ✅ C++ Solution

```cpp
class Solution {
public:
    int findComplement(int num) {
        int mask = 1;

        while (mask < num) {
            mask = (mask << 1) | 1;
        }

        return num ^ mask;
    }
};
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(log n)`
- **Space Complexity:** `O(1)`

---

## 🏷️ Tags
`Bit Manipulation` `Math`
