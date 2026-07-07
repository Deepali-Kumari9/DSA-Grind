/*
 * Problem    : Sum Root to Leaf Numbers
 * Platform   : LeetCode (129)
 * Difficulty : Medium
 * URL        : https://leetcode.com/problems/sum-root-to-leaf-numbers/
 *
 * Approach   : Recursive DFS
 *
 *              - Traverse the tree using Depth-First Search.
 *              - Maintain the number formed from the root
 *                to the current node.
 *              - At each node:
 *
 *                    current = current * 10 + node->val
 *
 *              - If a leaf node is reached, return the
 *                complete number formed.
 *              - Otherwise, recursively compute the sum
 *                from the left and right subtrees.
 *              - The final answer is the sum of all
 *                root-to-leaf numbers.
 *
 * Time Complexity : O(N)
 *                  Every node is visited exactly once.
 *
 * Space Complexity: O(H)
 *                  Recursive call stack, where H is the
 *                  height of the tree.
 */

class Solution {
public:

    int solve(TreeNode* root, int current) {

        if (root == NULL)
            return 0;

        current = current * 10 + root->val;

        if (root->left == NULL && root->right == NULL)
            return current;

        return solve(root->left, current) +
               solve(root->right, current);
    }

    int sumNumbers(TreeNode* root) {

        return solve(root, 0);
    }
};
