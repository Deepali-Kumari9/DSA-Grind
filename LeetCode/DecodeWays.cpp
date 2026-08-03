/*
    Problem: 91. Decode Ways
    Platform: LeetCode
    Language: C++17

    Approach:
    - Use Dynamic Programming from right to left.
    - Let dp[i] represent the number of ways to decode the substring
      starting at index i.
    - If the current character is '0', it cannot be decoded, so dp[i] = 0.
    - Otherwise:
        1. Decode the current digit alone.
        2. If the next two digits form a valid number (10–26),
           include the decoding count for both digits together.
    - The answer is stored in dp[0].

    Time Complexity: O(N)
    Space Complexity: O(N)

    Where:
    - N = length of the input string
*/

class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        vector<int> dp(n + 1, 0);

        dp[n] = 1;

        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '0') {
                dp[i] = 0;
            } else {
                dp[i] = dp[i + 1];

                if (i + 1 < n) {
                    int num = (s[i] - '0') * 10 + (s[i + 1] - '0');

                    if (num >= 10 && num <= 26)
                        dp[i] += dp[i + 2];
                }
            }
        }

        return dp[0];
    }
};
