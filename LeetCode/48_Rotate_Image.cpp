/*
 * Problem    : Rotate Image
 * Platform   : LeetCode (48)
 * Difficulty : Medium
 * URL        : https://leetcode.com/problems/rotate-image/
 *
 * Approach   : Transpose + Reverse
 *
 *             Step 1:
 *             Transpose the matrix by swapping
 *             matrix[i][j] with matrix[j][i].
 *
 *             Step 2:
 *             Reverse every row.
 *
 *             These two operations rotate the matrix
 *             by 90 degrees clockwise without using
 *             any extra matrix.
 *
 * Time Complexity : O(N²)
 *                  Every element is visited a constant
 *                  number of times.
 *
 * Space Complexity: O(1)
 *                  Rotation is performed in-place.
 */

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int n = matrix.size();

        // Transpose the matrix
        for (int i = 0; i < n; i++) {

            for (int j = i + 1; j < n; j++) {

                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Reverse every row
        for (int i = 0; i < n; i++) {

            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
