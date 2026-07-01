/*
 * Problem    : 543. Diameter of Binary Tree
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/diameter-of-binary-tree/
 *
 * Approach   : DFS Height with Global Diameter Update
 *              - The diameter at any node = left height + right height
 *                (longest path passing through that node).
 *              - Key insight: the diameter doesn't have to pass through root,
 *                so we update a global `diameter` variable at every node.
 *              - Piggyback on the height function:
 *                  - Recursively compute left and right heights.
 *                  - Update diameter = max(diameter, left + right).
 *                  - Return 1 + max(left, right) as the height of current node.
 *              - Single DFS pass handles both height and diameter simultaneously.
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
    int diameter = 0;

    int height(TreeNode* root) {
        if (root == NULL)
            return 0;

        int left  = height(root->left);
        int right = height(root->right);

        diameter = max(diameter, left + right);

        return 1 + max(left, right);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return diameter;
    }
};
