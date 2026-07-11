/*
 * Problem    : 235. Lowest Common Ancestor of a Binary Search Tree
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/
 *
 * Approach   : Iterative BST Property Exploitation
 *              - The BST property allows us to determine direction at each node:
 *                  - If both p->val and q->val < root->val → LCA is in left subtree.
 *                  - If both p->val and q->val > root->val → LCA is in right subtree.
 *                  - Otherwise (they split, or one equals root) → current node is LCA.
 *              - Iterative approach avoids recursion stack overhead.
 *              - Much simpler than general binary tree LCA since BST ordering
 *                guides the search directly without visiting all nodes.
 *
 * Time  Complexity : O(h) — h is the height of the BST
 *                           O(log n) for balanced, O(n) for skewed tree
 * Space Complexity : O(1) — iterative, no recursion stack
 */

#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        while (root) {
            if (p->val < root->val && q->val < root->val)
                root = root->left;
            else if (p->val > root->val && q->val > root->val)
                root = root->right;
            else
                return root;
        }
        return NULL;
    }
};
