/*
 * Problem    : 404. Sum of Left Leaves
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/sum-of-left-leaves/
 *
 * Approach   : Recursive DFS with Leaf Identification
 *              - Base case: if root is NULL, return 0.
 *              - At each node, check root->left:
 *                  - If root->left exists and is itself a leaf
 *                    (no left/right children), add its value directly to sum.
 *                  - Otherwise, recurse into root->left normally, since it
 *                    isn't a left leaf yet but may contain one deeper down.
 *              - Always recurse into root->right as well — right leaves don't
 *                count, but a right subtree can still contain left leaves.
 *              - Sum up contributions from both subtrees.
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
    int sumOfLeftLeaves(TreeNode* root) {
        if (root == NULL)
            return 0;

        int sum = 0;

        if (root->left) {
            if (root->left->left == NULL && root->left->right == NULL)
                sum += root->left->val;
            else
                sum += sumOfLeftLeaves(root->left);
        }

        sum += sumOfLeftLeaves(root->right);
        return sum;
    }
};
