/*
    Problem: 110. Balanced Binary Tree
    Platform: LeetCode
    Language: C++17

    Approach:
    - Create a helper function to calculate the height of a tree.
    - For each node, compare the heights of its left and right subtrees.
    - If the height difference is greater than 1, the tree is not balanced.
    - Recursively verify that both left and right subtrees are also balanced.

    Time Complexity: O(n²)
    Space Complexity: O(h)
    where h is the height of the tree.
*/

class Solution {
public:
    int height(TreeNode* root) {
        if (root == NULL)
            return 0;

        return 1 + max(height(root->left), height(root->right));
    }

    bool isBalanced(TreeNode* root) {
        if (root == NULL)
            return true;

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        if (abs(leftHeight - rightHeight) > 1)
            return false;

        return isBalanced(root->left) && isBalanced(root->right);
    }
};
