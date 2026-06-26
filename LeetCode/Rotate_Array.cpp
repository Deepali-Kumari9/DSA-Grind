/*
 * Problem    : 189. Rotate Array
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/rotate-array/
 *
 * Approach   : Three-Reverse Trick (In-place)
 *              - To rotate the array to the right by k steps:
 *                  1. Normalize: k = k % n (handles k > n edge case).
 *                  2. Reverse the entire array.
 *                  3. Reverse the first k elements.
 *                  4. Reverse the remaining n-k elements.
 *              - This works because reversing the whole array brings the last
 *                k elements to the front in reverse order; the two sub-reverses
 *                then fix their internal ordering.
 *              - Fully in-place — no extra array required.
 *
 * Time  Complexity : O(n) — three linear passes over the array
 * Space Complexity : O(1) — in-place reversal, no extra space used
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        reverse(nums.begin(), nums.end());           // Step 1: reverse entire array
        reverse(nums.begin(), nums.begin() + k);     // Step 2: reverse first k elements
        reverse(nums.begin() + k, nums.end());       // Step 3: reverse remaining n-k elements
    }
};
