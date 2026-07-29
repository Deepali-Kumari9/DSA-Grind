/*
    Problem: Unique Paths
    Platform: LeetCode
    Language: C++17

    Approach:
    - Use Dynamic Programming (DP) to count the number of unique paths.
    - Create a 2D DP table where dp[i][j] represents the number
      of unique paths to reach cell (i, j).
    - Initialize the first row and first column with 1 since
      there is only one way to reach those cells.
    - For every other cell, compute:
        dp[i][j] = dp[i-1][j] + dp[i][j-1]
    - Return the value stored in the bottom-right cell.

    Time Complexity: O(m × n)
    Space Complexity: O(m × n)

    where:
    - m = Number of rows
    - n = Number of columns
*/

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, 1));

        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }

        return dp[m - 1][n - 1];
    }
};
