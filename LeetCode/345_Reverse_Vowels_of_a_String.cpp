/*
 * Problem    : Reverse Vowels of a String
 * Platform   : LeetCode (345)
 * Difficulty : Easy
 * URL        : https://leetcode.com/problems/reverse-vowels-of-a-string/
 *
 * Approach   : Two Pointers
 *
 *              - Initialize two pointers:
 *                    • left at the beginning
 *                    • right at the end
 *
 *              - Move the left pointer until a vowel
 *                is found.
 *              - Move the right pointer until a vowel
 *                is found.
 *              - Swap the two vowels.
 *              - Continue until the pointers meet.
 *
 *              - Both uppercase and lowercase vowels
 *                are handled using tolower().
 *
 * Time Complexity : O(N)
 *                  Each character is visited at most once.
 *
 * Space Complexity: O(1)
 *                  In-place swapping without extra space.
 */

class Solution {
public:
    string reverseVowels(string s) {

        int left = 0;
        int right = s.length() - 1;

        while (left < right) {

            while (left < right &&
                  !(tolower(s[left]) == 'a' ||
                    tolower(s[left]) == 'e' ||
                    tolower(s[left]) == 'i' ||
                    tolower(s[left]) == 'o' ||
                    tolower(s[left]) == 'u')) {

                left++;
            }

            while (left < right &&
                  !(tolower(s[right]) == 'a' ||
                    tolower(s[right]) == 'e' ||
                    tolower(s[right]) == 'i' ||
                    tolower(s[right]) == 'o' ||
                    tolower(s[right]) == 'u')) {

                right--;
            }

            swap(s[left], s[right]);
            left++;
            right--;
        }

        return s;
    }
};
