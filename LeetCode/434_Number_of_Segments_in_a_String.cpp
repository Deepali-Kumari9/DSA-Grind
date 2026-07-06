/*
 * Problem    : Number of Segments in a String
 * Platform   : LeetCode (434)
 * Difficulty : Easy
 * URL        : https://leetcode.com/problems/number-of-segments-in-a-string/
 *
 * Approach   : Linear Traversal
 *
 *              - Traverse the string character by character.
 *              - A new segment starts when:
 *                    • Current character is not a space.
 *                    • It is either the first character
 *                      or the previous character is a space.
 *              - Count every such occurrence.
 *              - Return the final count.
 *
 * Time Complexity : O(N)
 *                  Single traversal of the string.
 *
 * Space Complexity: O(1)
 *                  No extra space is used.
 */

class Solution {
public:
    int countSegments(string s) {

        int count = 0;

        for (int i = 0; i < s.size(); i++) {

            if (s[i] != ' ' && (i == 0 || s[i - 1] == ' ')) {
                count++;
            }
        }

        return count;
    }
};
