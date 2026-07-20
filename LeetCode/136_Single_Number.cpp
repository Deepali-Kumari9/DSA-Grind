/*
    Problem: 136. Single Number
    Platform: LeetCode
    Difficulty: Easy

    Approach:
    - XOR all the elements.
    - Duplicate numbers cancel each other out (a ^ a = 0).
    - The remaining value is the unique element.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            ans ^= nums[i];
        }

        return ans;
    }
};
