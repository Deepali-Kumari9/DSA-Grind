/*
    Problem: 1791. Find Center of Star Graph
    Platform: LeetCode
    Difficulty: Easy

    Approach:
    - In a star graph, the center appears in every edge.
    - Compare the first two edges:
        • If edges[0][0] matches either node of the second edge,
          it is the center.
        • Otherwise, edges[0][1] is the center.

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        if (edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1])
            return edges[0][0];
        return edges[0][1];
    }
};
