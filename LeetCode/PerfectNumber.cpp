/*
 * Problem          : Perfect Number
 * Platform         : LeetCode #507
 * Difficulty       : Easy
 * Topic            : Math
 *
 * Approach         : Iterated from 1 to num-1 and summed
 *                    all divisors of num.
 *                    If sum equals num, it is a perfect number.
 *                    Note: Can be optimised to O(sqrt(n))
 *                    by iterating only up to sqrt(num).
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 */

class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0;
        for(int i = 1; i < num; i++){
            if(num % i == 0){
                sum += i;
            }
        }
        return sum == num;
    }
};
