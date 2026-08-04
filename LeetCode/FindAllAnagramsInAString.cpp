/*
    Problem: 438. Find All Anagrams in a String
    Platform: LeetCode
    Language: C++17

    Approach:
    - Use a sliding window of length equal to the pattern string.
    - Maintain two frequency arrays:
        * need   -> frequency of characters in the pattern.
        * window -> frequency of characters in the current window.
    - Initialize the first window and compare it with the pattern.
    - Slide the window one character at a time by:
        * Removing the leftmost character.
        * Adding the new rightmost character.
    - Whenever both frequency arrays match, record the starting index.

    Time Complexity: O(n)
    Space Complexity: O(1)

    where:
    - n = length of string s
*/

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        if (s.size() < p.size())
            return ans;

        vector<int> need(26, 0);
        vector<int> window(26, 0);

        for (char ch : p)
            need[ch - 'a']++;

        int k = p.size();

        // Initialize first window
        for (int i = 0; i < k; i++)
            window[s[i] - 'a']++;

        if (window == need)
            ans.push_back(0);

        // Slide the window
        for (int i = k; i < s.size(); i++) {
            window[s[i - k] - 'a']--;
            window[s[i] - 'a']++;

            if (window == need)
                ans.push_back(i - k + 1);
        }

        return ans;
    }
};
