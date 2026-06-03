/*
 * Problem          : Add Digits
 * Platform         : LeetCode #258
 * Difficulty       : Easy
 * Topic            : Math
 *
 * Approach         : Used nested while loops.
 *                    Outer loop runs until num becomes single digit.
 *                    Inner loop extracts digits using modulo and
 *                    keeps adding them until num < 10.
 *
 * Time Complexity  : O(log n)
 * Space Complexity : O(1)
 */

class Solution {
public:
    int addDigits(int num) {
        while(num >= 10){
            int sum = 0;
            while(num > 0){
                sum += num % 10;
                num /= 10;
            }
            num = sum;
        }
        return num;
    }
};
