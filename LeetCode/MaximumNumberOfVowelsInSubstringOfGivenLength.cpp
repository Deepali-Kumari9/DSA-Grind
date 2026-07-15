/*
 * Problem          : Maximum Number of Vowels in a Substring of Given Length
 * Platform         : LeetCode #1456
 * Difficulty       : Medium
 * Topic            : String, Sliding Window
 *
 * Approach         : Counted vowels in the first window of
 *                    size k. Then slid the window one
 *                    character at a time by removing the
 *                    left character and adding the right
 *                    character if they were vowels.
 *                    Updated the maximum vowel count for
 *                    every window.
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 */

class Solution {
public:
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' ||
               ch == 'i' || ch == 'o' ||
               ch == 'u';
    }

    int maxVowels(string s, int k) {
        int count = 0;

        for (int i = 0; i < k; i++) {
            if (isVowel(s[i]))
                count++;
        }

        int ans = count;

        for (int i = k; i < s.size(); i++) {
            if (isVowel(s[i - k]))
                count--;

            if (isVowel(s[i]))
                count++;

            ans = max(ans, count);
        }

        return ans;
    }
};
