/*
 * Problem          : Two Sum
 * Platform         : LeetCode #1
 * Difficulty       : Easy
 * Topic            : Arrays / Hash Map
 *
 * Approach         : Used unordered_map for O(n) solution.
 *                    For each element, checked if (target - nums[i])
 *                    already exists in the map.
 *                    If yes, return the pair of indices.
 *                    If no, store current element with its index.
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(n)
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];
            if (mp.find(need) != mp.end()) {
                return {mp[need], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};
