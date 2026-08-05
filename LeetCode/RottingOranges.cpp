/*
    Problem: Rotting Oranges
    Platform: LeetCode
    Language: C++17

    Approach:
    - Traverse the grid to count all fresh oranges and push every rotten orange into a queue.
    - Perform Multi-Source BFS starting from all initially rotten oranges.
    - In each BFS level (1 minute), rot all adjacent fresh oranges.
    - Decrease the fresh orange count whenever an orange becomes rotten.
    - If all fresh oranges are rotted, return the total minutes; otherwise, return -1.

    Time Complexity: O(m × n)
    Space Complexity: O(m × n)
*/

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        queue<pair<int, int>> q;
        int fresh = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 2)
                    q.push({i, j});
                else if (grid[i][j] == 1)
                    fresh++;
            }
        }

        if (fresh == 0)
            return 0;

        int minutes = 0;
        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        while (!q.empty()) {
            int size = q.size();
            bool rotten = false;

            while (size--) {
                auto curr = q.front();
                q.pop();

                int row = curr.first;
                int col = curr.second;

                for (int k = 0; k < 4; k++) {
                    int nr = row + dr[k];
                    int nc = col + dc[k];

                    if (nr >= 0 && nr < m &&
                        nc >= 0 && nc < n &&
                        grid[nr][nc] == 1) {

                        grid[nr][nc] = 2;
                        fresh--;
                        rotten = true;
                        q.push({nr, nc});
                    }
                }
            }

            if (rotten)
                minutes++;
        }

        return (fresh == 0) ? minutes : -1;
    }
};
