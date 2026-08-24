```cpp
/*
    Problem: 51. N-Queens
    Platform: LeetCode

    Approach:
    - Use backtracking to place one queen in each row.
    - For every row, try placing the queen in each column.
    - A position is valid only if no queen exists:
        1. In the same column
        2. On the upper-left diagonal
        3. On the upper-right diagonal
    - If a valid position is found, place the queen and recursively
      solve the next row.
    - After recursion, remove the queen (backtrack) and try another column.

    Time Complexity: O(N!)
    Space Complexity: O(N^2)
*/

class Solution {
public:
    vector<vector<string>> ans;

    bool isSafe(vector<string>& board, int row, int col, int n) {

        // Check column
        for (int i = 0; i < row; i++) {
            if (board[i][col] == 'Q')
                return false;
        }

        // Check upper-left diagonal
        for (int i = row - 1, j = col - 1;
             i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q')
                return false;
        }

        // Check upper-right diagonal
        for (int i = row - 1, j = col + 1;
             i >= 0 && j < n; i--, j++) {
            if (board[i][j] == 'Q')
                return false;
        }

        return true;
    }

    void solve(vector<string>& board, int row, int n) {

        // All queens placed
        if (row == n) {
            ans.push_back(board);
            return;
        }

        // Try every column in the current row
        for (int col = 0; col < n; col++) {

            if (isSafe(board, row, col, n)) {

                board[row][col] = 'Q';

                solve(board, row + 1, n);

                // Backtrack
                board[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {

        vector<string> board(n, string(n, '.'));

        solve(board, 0, n);

        return ans;
    }
};
```

**GitHub file name:** `NQueens.cpp`
