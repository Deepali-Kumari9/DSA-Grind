/*
    Problem: 15. 3Sum
    Platform: LeetCode
    Language: C++17

    Approach:
    - Sort the array.
    - Iterate through each element as the first element of the triplet.
    - Skip duplicate first elements to avoid repeated triplets.
    - Use the two-pointer technique to find two numbers whose sum equals the negative of the current element.
    - After finding a valid triplet, move both pointers while skipping duplicates.
    - Store all unique triplets in the answer vector.

    Time Complexity: O(N²)
    Space Complexity: O(1) (excluding the output vector)
*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if (sum == 0) {
                    ans.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;

                    while (left < right && nums[left] == nums[left - 1])
                        left++;

                    while (left < right && nums[right] == nums[right + 1])
                        right--;
                }
                else if (sum < 0) {
                    left++;
                }
                else {
                    right--;
                }
            }
        }

        return ans;
    }
};
