/*
    Problem: Valid Anagram
    Platform: LeetCode
    Language: C++17

    Approach:
    - First, check if both strings have the same length.
      If not, they cannot be anagrams.
    - Create a frequency array of size 26 to store the count
      of each lowercase English letter.
    - Traverse both strings simultaneously:
        • Increment the count for characters in s.
        • Decrement the count for characters in t.
    - Finally, check whether all frequency values are zero.
    - If every count is zero, the strings are anagrams.

    Time Complexity: O(n)
    Space Complexity: O(1)

    where:
    - n = Length of the strings
*/

class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.length() != t.length())
            return false;

        vector<int> count(26, 0);

        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (count[i] != 0)
                return false;
        }

        return true;
    }
};
