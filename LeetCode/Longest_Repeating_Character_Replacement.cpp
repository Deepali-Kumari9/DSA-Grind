# Longest Repeating Character Replacement

## 📌 Problem
Given a string `s` and an integer `k`, you can replace at most `k` characters in the string with any uppercase English letter. Return the length of the longest substring containing the same letter after performing at most `k` replacements.

## 💡 Approach
- Use the **Sliding Window** technique.
- Maintain a frequency array of size 26 to count characters in the current window.
- Track the maximum frequency (`maxFreq`) of any character in the window.
- If the number of characters to replace (`window size - maxFreq`) exceeds `k`, shrink the window from the left.
- Keep updating the maximum valid window size throughout the traversal.

## ⏱️ Complexity
- **Time:** O(n)
- **Space:** O(1)

## 💻 Solution (C++)

```cpp
class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0);
        int left = 0;
        int maxFreq = 0;
        int ans = 0;

        for (int right = 0; right < s.size(); right++) {
            freq[s[right] - 'A']++;
            maxFreq = max(maxFreq, freq[s[right] - 'A']);

            while ((right - left + 1) - maxFreq > k) {
                freq[s[left] - 'A']--;
                left++;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};
```
