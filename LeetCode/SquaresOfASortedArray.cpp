/*
    Problem: 977. Squares of a Sorted Array
    Platform: LeetCode
    Language: C++17

    Approach:
    - Traverse the input array and square each element.
    - Store the squared values in a new vector.
    - Sort the resulting vector in non-decreasing order.
    - Return the sorted vector.

    Time Complexity: O(N log N)
    Space Complexity: O(N)

    where:
    - N = Size of the input array
*/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;

        for (int i = 0; i < n; i++) {
            result.push_back(nums[i] * nums[i]);
        }

        sort(result.begin(), result.end());

        return result;
    }
};
