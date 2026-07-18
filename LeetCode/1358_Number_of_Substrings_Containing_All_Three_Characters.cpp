/*
    Problem: 1358. Number of Substrings Containing All Three Characters
    Platform: LeetCode
    Difficulty: Medium

    Approach:
    - Use the sliding window technique with two pointers.
    - Maintain the frequency of 'a', 'b', and 'c' in the current window.
    - Whenever the window contains at least one of each character,
      all substrings ending at the current right pointer and extending
      to the end are valid.
    - Shrink the window from the left to count all possible valid substrings.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        vector<int> count(3, 0);

        int left = 0;
        int ans = 0;

        for (int right = 0; right < n; right++) {
            count[s[right] - 'a']++;

            while (count[0] > 0 && count[1] > 0 && count[2] > 0) {
                ans += (n - right);
                count[s[left] - 'a']--;
                left++;
            }
        }

        return ans;
    }
};
