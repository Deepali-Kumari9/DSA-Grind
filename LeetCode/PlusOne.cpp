/*
 * Problem          : Plus One
 * Platform         : LeetCode #66
 * Difficulty       : Easy
 * Topic            : Arrays / Math
 *
 * Approach         : Traversed array from the end.
 *                    If digit < 9, increment and return directly.
 *                    If digit is 9, set it to 0 and carry over.
 *                    If all digits were 9, insert 1 at the beginning.
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 */

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i = digits.size()-1; i >= 0; i--) {

            if(digits[i] < 9) {
                digits[i]++;
                return digits;
            }

            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }
};
