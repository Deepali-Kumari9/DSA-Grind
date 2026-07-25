/*
    Problem: 101. Symmetric Tree
    Platform: LeetCode
    Language: C++

    Approach:
    - Use recursion to compare the left and right subtrees.
    - Two nodes are mirrors if:
        1. Both are NULL.
        2. Their values are equal.
        3. The left child of one matches the right child of the other.
        4. The right child of one matches the left child of the other.
    - Start the comparison from the root's left and right children.

    Time Complexity: O(n)
    Space Complexity: O(h)
    where h is the height of the tree (recursion stack).
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right)
 *         : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool mirror(TreeNode* left, TreeNode* right) {
        if (left == NULL && right == NULL)
            return true;

        if (left == NULL || right == NULL)
            return false;

        if (left->val != right->val)
            return false;

        return mirror(left->left, right->right) &&
               mirror(left->right, right->left);
    }

    bool isSymmetric(TreeNode* root) {
        if (root == NULL)
            return true;

        return mirror(root->left, root->right);
    }
};
