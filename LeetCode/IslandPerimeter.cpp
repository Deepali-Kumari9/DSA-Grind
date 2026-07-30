/*
    Problem: Island Perimeter
    Platform: LeetCode
    Language: C++17

    Approach:
    - Traverse every cell in the grid.
    - For each land cell, add 4 to the perimeter.
    - If the land cell has another land cell to its right,
      subtract 2 since the shared edge is counted twice.
    - If the land cell has another land cell below it,
      subtract 2 for the shared edge.
    - After processing all cells, return the total perimeter.

    Time Complexity: O(rows × cols)
    Space Complexity: O(1)

    where:
    - rows = Number of rows in the grid
    - cols = Number of columns in the grid
*/

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {

        int rows = grid.size();
        int cols = grid[0].size();
        int perimeter = 0;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {

                if (grid[i][j] == 1) {

                    perimeter += 4;

                    if (j + 1 < cols && grid[i][j + 1] == 1)
                        perimeter -= 2;

                    if (i + 1 < rows && grid[i + 1][j] == 1)
                        perimeter -= 2;
                }
            }
        }

        return perimeter;
    }
};
