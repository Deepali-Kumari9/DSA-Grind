/*
 * Problem    : 112. Path Sum
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/path-sum/
 *
 * Approach   : Recursive DFS (Depth First Search)
 *              - At each node, subtract the node's value from targetSum and recurse.
 *              - Base case 1: if root is NULL, return false (path doesn't exist).
 *              - Base case 2: if root is a leaf (no left or right child),
 *                check if remaining targetSum equals the leaf's value.
 *              - Recurse on both left and right subtrees with updated targetSum.
 *              - Return true if any root-to-leaf path produces the required sum.
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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == NULL)
            return false;

        // Leaf node check
        if (root->left == NULL && root->right == NULL)
            return targetSum == root->val;

        return hasPathSum(root->left, targetSum - root->val) ||
               hasPathSum(root->right, targetSum - root->val);
    }
};
