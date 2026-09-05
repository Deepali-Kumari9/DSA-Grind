## LeetCode 289 — Game of Life

### 💡 Approach

For every cell, count its **8 neighboring cells**.

* If a live cell has fewer than 2 or more than 3 live neighbors → it dies.
* If a live cell has 2 or 3 live neighbors → it stays alive.
* If a dead cell has exactly 3 live neighbors → it becomes alive.

A separate `next` board is used so that all cells are updated **simultaneously** based on the original board.

### ⏱️ Complexity

* **Time:** O(m × n)
* **Space:** O(m × n)

### 💻 C++ Solution

```cpp
class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();

        vector<vector<int>> next = board;

        int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
        int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                int live = 0;

                for (int k = 0; k < 8; k++) {
                    int x = i + dx[k];
                    int y = j + dy[k];

                    if (x >= 0 && x < m && y >= 0 && y < n) {
                        if (board[x][y] == 1)
                            live++;
                    }
                }

                if (board[i][j] == 1) {
                    if (live < 2 || live > 3)
                        next[i][j] = 0;
                }
                else {
                    if (live == 3)
                        next[i][j] = 1;
                }
            }
        }

        board = next;
    }
};
```

**Topic:** Matrix, Simulation
**Difficulty:** Medium
**Problem:** 289. Game of Life
**Platform:** LeetCode
