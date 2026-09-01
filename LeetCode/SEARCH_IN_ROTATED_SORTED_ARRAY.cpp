# LeetCode 33 — Search in Rotated Sorted Array

## Problem

Given a sorted array that has been rotated at an unknown index, search for a given target and return its index. If the target is not present, return `-1`.

The solution must run in **O(log n)** time.

## Approach

* Use **Binary Search**.
* At every step, determine which half of the array is sorted.
* Check whether the target lies within that sorted half.
* If it does, search there; otherwise, search the other half.
* Continue until the target is found or the search space becomes empty.

## C++ Solution

```cpp
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
                return mid;

            if (nums[low] <= nums[mid]) {
                // Left half is sorted
                if (nums[low] <= target && target < nums[mid])
                    high = mid - 1;
                else
                    low = mid + 1;
            }
            else {
                // Right half is sorted
                if (nums[mid] < target && target <= nums[high])
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }

        return -1;
    }
};
```

## Complexity

* **Time Complexity:** O(log n)
* **Space Complexity:** O(1)

### Key Concept

**Binary Search on a Rotated Sorted Array**

📌 LeetCode: **33. Search in Rotated Sorted Array**
