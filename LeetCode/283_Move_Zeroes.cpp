/*
 * Problem    : 283. Move Zeroes
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/move-zeroes/
 *
 * Approach   : Two-Pointer (In-place Swap)
 *              - Maintain a slow pointer 'j' that tracks the position where
 *                the next non-zero element should be placed.
 *              - Iterate through the array with pointer 'i':
 *                  - If nums[i] is non-zero, swap nums[i] with nums[j] and increment j.
 *              - All non-zero elements are compacted to the front in their original
 *                relative order, and zeroes naturally fill the remaining positions.
 *              - Fully in-place with no extra array needed.
 *
 * Time  Complexity : O(n) — single pass through the array
 * Space Complexity : O(1) — in-place, no extra space used
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};
