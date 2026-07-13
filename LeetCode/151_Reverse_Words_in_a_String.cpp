/*
 * Problem    : 151. Reverse Words in a String
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/reverse-words-in-a-string/
 *
 * Approach   : Stringstream Tokenization + Reverse Iteration
 *              - Use stringstream to extract words from the input string.
 *                stringstream automatically handles:
 *                  - Leading spaces
 *                  - Trailing spaces
 *                  - Multiple consecutive spaces between words
 *              - Push each extracted word into a vector.
 *              - Iterate from the end of the vector to the beginning,
 *                joining words with a single space.
 *              - Add space only between words (skip after the last word using i != 0 check).
 *
 * Time  Complexity : O(n) — single pass for tokenization, single pass for joining
 * Space Complexity : O(n) — storing words in the vector
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string word;
        stringstream ss(s);

        while (ss >> word) {
            words.push_back(word);
        }

        string ans;
        for (int i = words.size() - 1; i >= 0; i--) {
            ans += words[i];
            if (i != 0)
                ans += " ";
        }

        return ans;
    }
};
