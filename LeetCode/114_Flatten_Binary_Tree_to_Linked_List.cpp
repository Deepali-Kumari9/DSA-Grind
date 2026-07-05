/*
 * Problem    : 114. Flatten Binary Tree to Linked List
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/flatten-binary-tree-to-linked-list/
 *
 * Approach   : Reverse Pre-order DFS with Global Prev Pointer
 *              - Process nodes in reverse pre-order: right → left → root.
 *              - Maintain a global `prev` pointer initialized to NULL.
 *              - At each node:
 *                  - Set root->right = prev (link to the previously processed node).
 *                  - Set root->left  = NULL (clear left child as required).
 *                  - Update prev = root.
 *              - Since we process right subtree first, by the time we set
 *                root->right = prev, prev already holds the correct next node
 *                in pre-order sequence.
 *              - Fully in-place, no extra data structures needed.
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
    TreeNode* prev = NULL;

    void flatten(TreeNode* root) {
        if (root == NULL)
            return;

        flatten(root->right);
        flatten(root->left);

        root->right = prev;
        root->left  = NULL;
        prev = root;
    }
};
