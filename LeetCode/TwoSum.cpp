/*
 * Problem : Two Sum
 * Platform : LeetCode #1
 * Difficulty : Easy
 * Topic : Arrays
 *
 * Approach : Brute force using nested loops
 *            Check every pair (i,j) and return
 *            indices where nums[i] + nums[j] == target
 *
 * Time Complexity : O(n²)
 * Space Complexity : O(1)
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    return{i,j};
                }
            }
        }
        return{};
    }
};
