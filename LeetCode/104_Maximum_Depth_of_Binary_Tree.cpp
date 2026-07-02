/*
 * Problem    : 104. Maximum Depth of Binary Tree
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/maximum-depth-of-binary-tree/
 *
 * Approach   : Recursive DFS
 *              - Base case: if root is NULL, return 0.
 *              - Recursively compute the max depth of left and right subtrees.
 *              - Return 1 + max(left, right) — adding 1 accounts for the
 *                current node itself.
 *              - The recursion naturally bottoms out at leaf nodes and builds
 *                the depth answer back up to the root.
 *
 * Time  Complexity : O(n) — every node is visited exactly once
 * Space Complexity : O(h) — recursion stack depth equals tree height h
 *                           O(log n) for balanced, O(n) for skewed tree
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
    int maxDepth(TreeNode* root) {
        if (root == NULL)
            return 0;

        int left  = maxDepth(root->left);
        int right = maxDepth(root->right);

        return 1 + max(left, right);
    }
};
