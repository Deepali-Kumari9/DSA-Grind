/*
 * Problem          : Majority Element
 * Platform         : LeetCode #169
 * Difficulty       : Easy
 * Topic            : Array, Boyer-Moore Voting Algorithm
 *
 * Approach         : Maintained a candidate and count.
 *                    When count became zero, selected a new candidate.
 *                    Incremented count for matches and decremented otherwise.
 *                    Final candidate is the majority element.
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 */

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;

        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }

            if (num == candidate) {
                count++;
            } else {
                count--;
            }
        }

        return candidate;
    }
};
