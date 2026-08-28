/*
* Problem          : Check if Array Is Sorted and Rotated
* Platform         : LeetCode #1752
* Topic            : Arrays
*
* Approach         : Count the number of positions where the
*                    current element is greater than the next
*                    element. Also check the last element with
*                    the first element because the array is
*                    considered circular.
*
*                    If there is at most one such break point,
*                    the array can be sorted and rotated.
*
* Time Complexity  : O(n)
* Space Complexity : O(1)
*/

class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                count++;
            }
        }

        // Check the circular pair
        if (nums[nums.size() - 1] > nums[0]) {
            count++;
        }

        return count <= 1;
    }
};
