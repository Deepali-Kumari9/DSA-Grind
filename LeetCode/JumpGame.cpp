/*
    Problem: Jump Game
    Platform: LeetCode
    Language: C++17

    Approach:
    - Keep track of the farthest index that can currently be reached.
    - For every index, if it is beyond the farthest reachable position,
      we cannot reach it, so return false.
    - Otherwise, update the farthest reachable index using i + nums[i].
    - If the farthest position reaches the last index, return true.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int farthest = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (i > farthest) {
                return false;
            }

            farthest = max(farthest, i + nums[i]);

            if (farthest >= nums.size() - 1) {
                return true;
            }
        }

        return true;
    }
};
