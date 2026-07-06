/*
 * Problem    : Lowest Common Ancestor of a Binary Tree
 * Platform   : LeetCode (236)
 * Difficulty : Medium
 * URL        : https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/
 *
 * Approach   : Recursive DFS
 *
 *              - If the current node is NULL, return NULL.
 *              - If the current node is either p or q,
 *                return the current node.
 *              - Recursively search in the left and right
 *                subtrees.
 *              - If both recursive calls return non-NULL,
 *                the current node is the Lowest Common Ancestor.
 *              - Otherwise, return the non-NULL child.
 *
 * Time Complexity : O(N)
 *                  Every node is visited at most once.
 *
 * Space Complexity: O(H)
 *                  Recursive call stack, where H is the
 *                  height of the tree.
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        if (root == NULL || root == p || root == q)
            return root;

        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);

        if (left != NULL && right != NULL)
            return root;

        if (left != NULL)
            return left;

        return right;
    }
};
