/*
    Problem: 167. Two Sum II - Input Array Is Sorted
    Platform: LeetCode
    Language: C++17

    Approach:
    - Use two pointers, one at the beginning and one at the end of the sorted array.
    - Calculate the sum of the two elements.
    - If the sum equals the target, return their 1-based indices.
    - If the sum is smaller than the target, move the left pointer forward.
    - Otherwise, move the right pointer backward.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;

        while (left < right) {
            int sum = numbers[left] + numbers[right];

            if (sum == target) {
                return {left + 1, right + 1};
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }

        return {};
    }
};
