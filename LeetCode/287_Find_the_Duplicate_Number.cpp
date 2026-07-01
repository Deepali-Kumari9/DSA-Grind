/*
 * Problem    : 287. Find the Duplicate Number
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/find-the-duplicate-number/
 *
 * Approach   : Floyd's Cycle Detection (Tortoise and Hare)
 *              - Treat the array as a linked list where index i points to nums[i].
 *              - The duplicate value creates a cycle in this implicit linked list.
 *
 *              Phase 1 — Detect the cycle:
 *                  - slow moves 1 step: slow = nums[slow]
 *                  - fast moves 2 steps: fast = nums[nums[fast]]
 *                  - They meet somewhere inside the cycle.
 *
 *              Phase 2 — Find the cycle entrance (= duplicate number):
 *                  - Reset slow to nums[0] (start of list).
 *                  - Keep fast at the meeting point.
 *                  - Move both 1 step at a time.
 *                  - They meet exactly at the duplicate number.
 *
 *              No array modification, no extra space needed.
 *
 * Time  Complexity : O(n) — two linear passes at most
 * Space Complexity : O(1) — only two pointers used
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

        // Phase 1: detect cycle
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        // Phase 2: find cycle entrance (duplicate)
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};
