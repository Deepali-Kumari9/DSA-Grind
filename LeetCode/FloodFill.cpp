/*
    Problem: Flood Fill
    Platform: LeetCode
    Language: C++17

    Approach:
    - Use Depth First Search (DFS) to traverse the connected pixels.
    - Store the original color of the starting pixel.
    - If the original color is already equal to the new color, return the image.
    - Starting from (sr, sc), recursively visit all four adjacent
      cells (up, down, left, right).
    - Recolor only those cells whose color matches the original color.
    - Return the modified image after DFS completes.

    Time Complexity: O(m × n)
    Space Complexity: O(m × n)

    where:
    - m = Number of rows in the image
    - n = Number of columns in the image
*/

class Solution {
public:
    void dfs(vector<vector<int>>& image, int r, int c,
             int oldColor, int newColor) {

        int m = image.size();
        int n = image[0].size();

        if (r < 0 || r >= m || c < 0 || c >= n)
            return;

        if (image[r][c] != oldColor)
            return;

        image[r][c] = newColor;

        dfs(image, r + 1, c, oldColor, newColor);
        dfs(image, r - 1, c, oldColor, newColor);
        dfs(image, r, c + 1, oldColor, newColor);
        dfs(image, r, c - 1, oldColor, newColor);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        int oldColor = image[sr][sc];

        if (oldColor == color)
            return image;

        dfs(image, sr, sc, oldColor, color);

        return image;
    }
};
