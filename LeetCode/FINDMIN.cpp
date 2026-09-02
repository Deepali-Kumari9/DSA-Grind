# 🚀 DSA Practice – Find Minimum in Rotated Sorted Array | LeetCode

Solved **LeetCode 153: Find Minimum in Rotated Sorted Array** ✅

### 🧩 Problem

Given a sorted array that has been rotated, find the **minimum element**.

The array contains **unique elements**, and the solution must run in `O(log n)` time.

### 💡 Approach

Use **Binary Search**:

* Compare `nums[mid]` with `nums[right]`.
* If `nums[mid] > nums[right]`, the minimum must be on the **right side**.
* Otherwise, the minimum is at `mid` or on the **left side**.
* Continue until `left == right`.
* `nums[left]` is the minimum element.

### ⏱️ Complexity

* **Time:** `O(log n)`
* **Space:** `O(1)`

### 💻 C++ Solution

```cpp
class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] > nums[right])
                left = mid + 1;
            else
                right = mid;
        }

        return nums[left];
    }
};
```

### 📌 Key Takeaway

This problem is a great application of **Binary Search on a rotated sorted array**, where the search space is reduced by half at every step.

#LeetCode #DSA #BinarySearch #CPlusPlus #ProblemSolving #CompetitiveProgramming #DSAPractice
