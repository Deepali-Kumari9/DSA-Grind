/*
 * Problem    : 832. Flipping an Image
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/flipping-an-image/
 *
 * Approach   : Reverse then Invert (Two-step per row)
 *              - For each row in the binary matrix:
 *                  Step 1: Reverse the row using STL reverse().
 *                  Step 2: Invert every element using image[i][j] = 1 - image[i][j].
 *                          This flips 0 → 1 and 1 → 0 without any conditionals.
 *              - Both operations are applied in-place, row by row.
 *              - The `1 - x` trick is a clean way to toggle binary values.
 *
 * Time  Complexity : O(n²) — processing all elements of an n×n matrix
 * Space Complexity : O(1)  — in-place modification, no extra space used
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (int i = 0; i < image.size(); i++) {
            reverse(image[i].begin(), image[i].end());

            for (int j = 0; j < image[i].size(); j++) {
                image[i][j] = 1 - image[i][j];
            }
        }
        return image;
    }
};
