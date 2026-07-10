/*
 * Problem    : 701. Insert into a Binary Search Tree
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/insert-into-a-binary-search-tree/
 *
 * Approach   : Recursive BST Insertion
 *              - Base case: if root is NULL, create and return a new node with val.
 *              - If val < root->val, recurse into left subtree and assign result
 *                back to root->left.
 *              - If val > root->val, recurse into right subtree and assign result
 *                back to root->right.
 *              - Return root at the end to wire the new node back into the tree.
 *              - The BST property naturally guides val to its correct position
 *                without any rebalancing needed.
 *
 * Time  Complexity : O(h) — h is the height of the BST
 *                           O(log n) for balanced, O(n) for skewed tree
 * Space Complexity : O(h) — recursion stack depth equals tree height
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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (root == nullptr)
            return new TreeNode(val);

        if (val < root->val)
            root->left = insertIntoBST(root->left, val);
        else
            root->right = insertIntoBST(root->right, val);

        return root;
    }
};
