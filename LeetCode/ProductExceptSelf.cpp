/*
    Problem: Product of Array Except Self
    Platform: LeetCode
    Problem No.: 238
    Language: C++17

    Approach:
    - Create an answer array initialized with 1.
    - Traverse from left to right while maintaining a prefix product.
      Store the product of all elements before the current index.
    - Traverse from right to left while maintaining a suffix product.
      Multiply each answer element by the suffix product.
    - Return the final answer array.

    Time Complexity: O(N)
    Space Complexity: O(1) (excluding the output array)
*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);

        int prefix = 1;
        for (int i = 0; i < n; i++) {
            ans[i] = prefix;
            prefix *= nums[i];
        }

        int suffix = 1;
        for (int i = n - 1; i >= 0; i--) {
            ans[i] *= suffix;
            suffix *= nums[i];
        }

        return ans;
    }
};
