/*
 * Problem    : 700. Search in a Binary Search Tree
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/search-in-a-binary-search-tree/
 *
 * Approach   : Recursive BST Search
 *              - Base case: if root is NULL or root->val == val, return root.
 *              - If val < root->val, search in the left subtree.
 *              - If val > root->val, search in the right subtree.
 *              - The BST property eliminates half the tree at every step,
 *                guiding the search directly to the target without visiting
 *                every node.
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
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root == NULL || root->val == val)
            return root;

        if (val < root->val)
            return searchBST(root->left, val);
        else
            return searchBST(root->right, val);
    }
};
