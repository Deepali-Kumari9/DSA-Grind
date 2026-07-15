/*
 * Problem    : 199. Binary Tree Right Side View
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/binary-tree-right-side-view/
 *
 * Approach   : DFS — Right Subtree First with Level Tracking
 *              - Recurse into the RIGHT subtree before the left at every node.
 *              - Pass the current level as a parameter.
 *              - Whenever level == ans.size(), it means this is the first node
 *                visited at this depth — and since we go right first, it is
 *                always the rightmost visible node at that level.
 *              - Push root->val into ans and recurse deeper.
 *              - No BFS queue needed — DFS naturally captures the right side view.
 *
 * Time  Complexity : O(n) — every node is visited exactly once
 * Space Complexity : O(h) — recursion stack depth equals tree height h
 */

#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    void dfs(TreeNode* root, int level, vector<int>& ans) {
        if (root == NULL) return;

        if (level == ans.size())
            ans.push_back(root->val);

        dfs(root->right, level + 1, ans);
        dfs(root->left,  level + 1, ans);
    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        dfs(root, 0, ans);
        return ans;
    }
};
