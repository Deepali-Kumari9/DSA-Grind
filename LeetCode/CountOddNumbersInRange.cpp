/*
 * Problem          : Count Odd Numbers in an Interval Range
 * Platform         : LeetCode #1523
 * Difficulty       : Easy
 * Topic            : Math
 *
 * Approach         : Count of odd numbers from 0 to n = (n+1)/2.
 *                    So count of odds between low and high
 *                    = (high+1)/2 - low/2.
 *                    O(1) math formula — no iteration needed.
 *
 * Time Complexity  : O(1)
 * Space Complexity : O(1)
 */

class Solution {
public:
    int countOdds(int low, int high) {
        return (high + 1) / 2 - low / 2;
    }
};
