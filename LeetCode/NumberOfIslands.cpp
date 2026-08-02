/*
    Problem: 200. Number of Islands
    Platform: LeetCode
    Language: C++17

    Approach:
    - Traverse every cell in the grid.
    - Whenever an unvisited land cell ('1') is found,
      increment the island count.
    - Perform Depth-First Search (DFS) to visit all
      connected land cells (up, down, left, right).
    - Mark each visited land cell as water ('0') to
      avoid revisiting it.
    - Continue until the entire grid has been processed.

    Time Complexity: O(m × n)
    Space Complexity: O(m × n)   // Recursive DFS stack in the worst case

    Where:
    - m = number of rows
    - n = number of columns
*/

class Solution {
public:
    void dfs(vector<vector<char>>& grid, int i, int j) {
        int m = grid.size();
        int n = grid[0].size();

        if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == '0')
            return;

        grid[i][j] = '0';

        dfs(grid, i + 1, j);
        dfs(grid, i - 1, j);
        dfs(grid, i, j + 1);
        dfs(grid, i, j - 1);
    }

    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1') {
                    count++;
                    dfs(grid, i, j);
                }
            }
        }

        return count;
    }
};
