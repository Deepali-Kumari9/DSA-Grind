/*
 * Problem    : 450. Delete Node in a BST
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/delete-node-in-a-bst/
 *
 * Approach   : Recursive BST Deletion (3 Cases)
 *              - Use BST property to find the node to delete.
 *              - Case 1: Node has no left child  → return root->right.
 *              - Case 2: Node has no right child → return root->left.
 *              - Case 3: Node has two children:
 *                  - Find the inorder successor (leftmost node in right subtree)
 *                    using findMin().
 *                  - Copy its value to the current node.
 *                  - Delete the inorder successor from the right subtree.
 *              - Recursive return values rewire the tree automatically.
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
    TreeNode* findMin(TreeNode* root) {
        while (root->left != NULL)
            root = root->left;
        return root;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == NULL)
            return NULL;

        if (key < root->val) {
            root->left = deleteNode(root->left, key);
        } else if (key > root->val) {
            root->right = deleteNode(root->right, key);
        } else {
            // Node found — handle 3 cases
            if (root->left == NULL)
                return root->right;
            if (root->right == NULL)
                return root->left;

            // Two children: replace with inorder successor
            TreeNode* temp = findMin(root->right);
            root->val = temp->val;
            root->right = deleteNode(root->right, temp->val);
        }

        return root;
    }
};
