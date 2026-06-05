/*
 * Problem          : Palindrome Number
 * Platform         : LeetCode #9
 * Difficulty       : Easy
 * Topic            : Math
 *
 * Approach         : Reversed the number mathematically
 *                    using modulo and division.
 *                    Compared reversed number with original.
 *                    Negative numbers directly return false
 *                    as they can never be palindromes.
 *
 * Time Complexity  : O(log n)
 * Space Complexity : O(1)
 */

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int temp = x;
        long long digit = 0;
        while(x > 0){
            digit = digit*10 + x % 10;
            x = x / 10;
        }
        return digit == temp;
    }
};
