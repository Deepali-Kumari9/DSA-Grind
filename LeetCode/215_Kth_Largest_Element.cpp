/*
 * Problem    : 215. Kth Largest Element in an Array
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/kth-largest-element-in-an-array/
 *
 * Approach   : Min-Heap of Size K
 *              - Maintain a min-heap (priority_queue with greater<int>) that
 *                holds at most k elements.
 *              - Push every element into the heap.
 *              - Whenever the heap size exceeds k, pop the smallest element —
 *                this discards elements that can't be among the k largest.
 *              - After processing all elements, the heap's top is exactly
 *                the kth largest element, since only the k largest values
 *                ever survive in the heap.
 *
 * Time  Complexity : O(n log k) — much better than full O(n log n) sort
 *                    when k is small relative to n
 * Space Complexity : O(k) — heap stores at most k elements
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;

        for (int i = 0; i < nums.size(); i++) {
            pq.push(nums[i]);
            if (pq.size() > k)
                pq.pop();
        }

        return pq.top();
    }
};
