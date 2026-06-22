/*
 * Problem          : Pascal's Triangle II
 * Platform         : LeetCode #119
 * Difficulty       : Easy
 * Topic            : Array / Dynamic Programming
 *
 * Approach         : Initialize a row of size
 *                    (rowIndex + 1) with all values as 1.
 *
 *                    Build Pascal's Triangle row-by-row
 *                    in-place by updating elements from
 *                    right to left.
 *
 *                    Each element is updated as:
 *                    row[j] = row[j] + row[j - 1]
 *
 *                    Traversing backwards ensures previous
 *                    values are not overwritten before use.
 *
 * Time Complexity  : O(rowIndex²)
 * Space Complexity : O(rowIndex)
 */

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row(rowIndex + 1, 1);

        for(int i = 2; i <= rowIndex; i++) {
            for(int j = i - 1; j >= 1; j--) {
                row[j] += row[j - 1];
            }
        }

        return row;
    }
};
