/*
 * Problem    : 1969. Check if Array is Good (Minimum One Bit Problem)
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/check-if-array-is-good/
 *
 * Approach   : GCD of All Elements (Bézout's Identity)
 *              - By Bézout's identity, a subset of integers can produce a
 *                linear combination equal to 1 if and only if their GCD is 1.
 *              - The array is "good" if we can multiply elements by integers
 *                and sum them to get 1 — which is possible iff GCD of all
 *                elements equals 1.
 *              - Compute the GCD of all elements iteratively using __gcd().
 *              - Return true if final GCD == 1, false otherwise.
 *              - What appears to be a complex combinatorics problem reduces
 *                to a single GCD computation.
 *
 * Time  Complexity : O(n log m) — n elements, m = max value, log m per GCD call
 * Space Complexity : O(1)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int g = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            g = gcd(g, nums[i]);
        }
        return g == 1;
    }
};
