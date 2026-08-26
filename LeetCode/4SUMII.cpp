```cpp
/*
    Problem: 4Sum II
    Platform: LeetCode
    Problem Number: 454

    Approach:
    - Store the frequency of every possible sum of nums1 and nums2
      in an unordered_map.
    - For every pair from nums3 and nums4, calculate their sum.
    - We need the opposite sum -(nums3[i] + nums4[j]) to make the
      total sum equal to 0.
    - Add its frequency to the answer.

    Time Complexity: O(n^2)
    Space Complexity: O(n^2)
*/

class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2,
                     vector<int>& nums3, vector<int>& nums4) {

        unordered_map<int, int> mp;

        // Store sums of nums1 and nums2
        for (int a : nums1) {
            for (int b : nums2) {
                mp[a + b]++;
            }
        }

        int ans = 0;

        // Find complementary sums from nums3 and nums4
        for (int c : nums3) {
            for (int d : nums4) {
                int sum = c + d;

                ans += mp[-sum];
            }
        }

        return ans;
    }
};
```

**GitHub file name:** `4SUMII.cpp`
