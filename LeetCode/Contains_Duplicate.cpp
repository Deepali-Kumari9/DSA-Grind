/*
 * Problem          : Contains Duplicate
 * Platform         : LeetCode #217
 * Difficulty       : Easy
 * Topic            : Array / Hash Set
 *
 * Approach         : Used unordered_set to keep track
 *                    of visited elements.
 *                    If an element already exists in
 *                    the set, return true.
 *                    Otherwise, insert it and continue.
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(n)
 */

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;

        for (int num : nums) {
            if (s.find(num) != s.end()) {
                return true;
            }
            s.insert(num);
        }

        return false;
    }
};
