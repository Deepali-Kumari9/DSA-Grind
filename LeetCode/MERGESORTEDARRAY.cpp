## LeetCode 88 — Merge Sorted Array

Solved **Merge Sorted Array** ✅

### 💡 Approach

Since both arrays are already sorted, we can merge them efficiently using **three pointers** from the end.

* `i` points to the last valid element of `nums1`
* `j` points to the last element of `nums2`
* `k` points to the last position of `nums1`
* Place the larger element at position `k` and move the pointers accordingly.
* Finally, copy any remaining elements from `nums2`.

This avoids using an extra array.

### ⏱️ Complexity

* **Time:** `O(m + n)`
* **Space:** `O(1)`

### 💻 C++ Solution

```cpp
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }

        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};
```

**📁 File Name:** `MERGESORTEDARRAY.cpp`

**Topic:** Arrays / Two Pointers
**Difficulty:** Easy
**Platform:** LeetCode

#LeetCode #DSA #Arrays #TwoPointers #CPlusPlus #ProblemSolving
