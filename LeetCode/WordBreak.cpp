```cpp
/*
    Problem: Word Break
    Platform: LeetCode
    Language: C++17

    Approach:
    - Use Dynamic Programming to determine whether the string can be segmented
      into words from the given dictionary.
    - dp[i] represents whether the first i characters of the string can be
      successfully segmented.
    - Set dp[0] = true because an empty string can be considered segmented.
    - For every position i, check each word in the dictionary.
    - If the word matches the substring ending at position i and the part
      before that word can already be segmented, set dp[i] = true.
    - If dp[n] is true, the entire string can be segmented.

    Time Complexity: O(n * m * k)
    Space Complexity: O(n)

    where:
    n = length of string
    m = number of words in dictionary
    k = average word length
*/

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.length();

        vector<bool> dp(n + 1, false);
        dp[0] = true;

        for (int i = 1; i <= n; i++) {
            for (string word : wordDict) {
                int len = word.length();

                if (i >= len && dp[i - len] &&
                    s.substr(i - len, len) == word) {
                    dp[i] = true;
                    break;
                }
            }
        }

        return dp[n];
    }
};
```

**GitHub file name:** `WordBreak.cpp`
