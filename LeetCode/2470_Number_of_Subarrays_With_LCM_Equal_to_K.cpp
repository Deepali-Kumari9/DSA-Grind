/*
 * Problem    : 2470. Number of Subarrays With LCM Equal to K
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/number-of-subarrays-with-lcm-equal-to-k/
 *
 * Approach   : Brute Force with Early Termination
 *              - For every starting index i, expand the subarray to the right
 *                and maintain a running LCM using __gcd:
 *                    LCM(a, b) = (a / gcd(a, b)) * b
 *              - If running LCM == k, increment the answer.
 *              - Early exit condition: if LCM > k OR k % LCM != 0, break.
 *                Since LCM is monotonically non-decreasing as we add elements,
 *                and k must be divisible by the LCM for any future match,
 *                we can safely stop expanding this subarray.
 *
 * Time  Complexity : O(n^2 * log(max)) — nested loop with GCD computation,
 *                    early break keeps it efficient in practice
 * Space Complexity : O(1) — no extra space used
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long LCM(long long a, long long b) {
        return (a / __gcd(a, b)) * b;
    }

    int subarrayLCM(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            long long lcm = 1;

            for (int j = i; j < n; j++) {
                lcm = LCM(lcm, nums[j]);

                if (lcm == k)
                    ans++;

                // LCM only grows; if it exceeds k or k isn't divisible, stop
                if (lcm > k || k % lcm != 0)
                    break;
            }
        }

        return ans;
    }
};
