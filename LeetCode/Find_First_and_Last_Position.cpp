/*
 * Problem    : 34. Find First and Last Position of Element in Sorted Array
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
 *
 * Approach   : Binary Search using STL lower_bound and upper_bound
 *              - lower_bound returns an iterator to the first element >= target.
 *                This is the starting position of the target if it exists.
 *              - Check if the found position is valid and actually equals target;
 *                if not, return {-1, -1} since target is absent.
 *              - upper_bound returns an iterator to the first element > target.
 *                Subtract 1 to get the last position of target.
 *              - Both operations run in O(log n), making the overall approach O(log n).
 *
 * Time  Complexity : O(log n) — two binary searches on the sorted array
 * Space Complexity : O(1)     — no extra space used
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = lower_bound(nums.begin(), nums.end(), target) - nums.begin();

        if (first == nums.size() || nums[first] != target)
            return {-1, -1};

        int last = upper_bound(nums.begin(), nums.end(), target) - nums.begin() - 1;

        return {first, last};
    }
};
