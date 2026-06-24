/*
 * Problem    : 35. Search Insert Position
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/search-insert-position/
 *
 * Approach   : Binary Search
 *              - Maintain two pointers: low = 0, high = n - 1.
 *              - At each step, calculate mid = low + (high - low) / 2 to avoid overflow.
 *              - If nums[mid] == target, return mid directly.
 *              - If nums[mid] < target, search right half (low = mid + 1).
 *              - If nums[mid] > target, search left half (high = mid - 1).
 *              - When target is not found, 'low' naturally points to the correct
 *                insertion index where target would maintain sorted order.
 *
 * Time  Complexity : O(log n) — binary search halves the search space each iteration
 * Space Complexity : O(1)     — no extra space used
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return low;
    }
};
