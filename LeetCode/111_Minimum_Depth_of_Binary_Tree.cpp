/*
 * Problem    : 111. Minimum Depth of Binary Tree
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/minimum-depth-of-binary-tree/
 *
 * Approach   : Recursive DFS with NULL-child Edge Case Handling
 *              - Base case: if root is NULL, return 0.
 *              - If root is a leaf (no children), return 1.
 *              - Key edge case: if only one child exists, we must NOT recurse
 *                into the NULL side — a NULL child is not a leaf node.
 *                  - If left is NULL  → recurse only on right subtree.
 *                  - If right is NULL → recurse only on left subtree.
 *              - If both children exist, return 1 + min(left depth, right depth).
 *              - This ensures we only count root-to-LEAF paths, not root-to-NULL.
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
    int minDepth(TreeNode* root) {
        if (root == NULL)
            return 0;

        // Leaf node
        if (root->left == NULL && root->right == NULL)
            return 1;

        // Only right subtree exists
        if (root->left == NULL)
            return 1 + minDepth(root->right);

        // Only left subtree exists
        if (root->right == NULL)
            return 1 + minDepth(root->left);

        // Both subtrees exist
        return 1 + min(minDepth(root->left), minDepth(root->right));
    }
};
