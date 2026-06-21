/*
 * Problem          : Find Greatest Common Divisor of Array
 * Platform         : LeetCode #1979
 * Difficulty       : Easy
 * Topic            : Math / Arrays
 *
 * Approach         : Found minimum and maximum elements of
 *                    the array using STL min_element and
 *                    max_element functions.
 *                    Returned their GCD using C++ built-in
 *                    __gcd() function.
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 */

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());
        return __gcd(mini, maxi);
    }
};
