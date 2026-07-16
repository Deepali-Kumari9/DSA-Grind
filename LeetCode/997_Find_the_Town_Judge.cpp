/*
 * Problem    : 997. Find the Town Judge
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/find-the-town-judge/
 *
 * Approach   : In-degree and Out-degree Arrays (Graph Modelling)
 *              - Model the trust relationships as a directed graph.
 *              - For every trust pair [a, b]:
 *                  - Increment outdegree[a] (a trusts someone).
 *                  - Increment indegree[b]  (b is trusted by someone).
 *              - The town judge satisfies two conditions:
 *                  1. Trusts nobody       → outdegree[i] == 0
 *                  2. Trusted by everyone → indegree[i]  == n - 1
 *              - Scan all people 1 to n and return the one meeting both conditions.
 *              - Return -1 if no such person exists.
 *
 * Time  Complexity : O(n + T) — T = number of trust relationships
 * Space Complexity : O(n)     — two arrays of size n+1
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> indegree(n + 1, 0);
        vector<int> outdegree(n + 1, 0);

        for (auto &t : trust) {
            int a = t[0];
            int b = t[1];
            outdegree[a]++;
            indegree[b]++;
        }

        for (int i = 1; i <= n; i++) {
            if (indegree[i] == n - 1 && outdegree[i] == 0)
                return i;
        }

        return -1;
    }
};
