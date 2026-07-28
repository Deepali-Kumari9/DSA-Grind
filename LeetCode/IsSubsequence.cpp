/*
    Problem: Is Subsequence
    Platform: LeetCode
    Language: C++17

    Approach:
    - Use two pointers to traverse both strings.
    - Pointer i traverses string s.
    - Pointer j traverses string t.
    - If characters match, move both pointers.
    - Otherwise, move only pointer j.
    - If i reaches the end of s, then s is a subsequence of t.

    Time Complexity: O(n)
    Space Complexity: O(1)

    where:
    - n = Length of string t
*/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;

        while (i < s.length() && j < t.length()) {
            if (s[i] == t[j]) {
                i++;
            }
            j++;
        }

        return i == s.length();
    }
};
