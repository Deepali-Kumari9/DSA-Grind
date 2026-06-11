/*
 * Problem          : Bulb Switcher
 * Platform         : LeetCode #319
 * Difficulty       : Medium
 * Topic            : Math
 *
 * Approach         : Only bulbs at perfect square positions
 *                    remain ON at the end because only perfect
 *                    squares have an odd number of divisors.
 *                    Every other number has an even number of
 *                    divisors so those bulbs get toggled back OFF.
 *                    Answer is simply floor(sqrt(n)).
 *
 * Time Complexity  : O(1)
 * Space Complexity : O(1)
 */

class Solution {
public:
    int bulbSwitch(int n) {
        return sqrt(n);
    }
};
