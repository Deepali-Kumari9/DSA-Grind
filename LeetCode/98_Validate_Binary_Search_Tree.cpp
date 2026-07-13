/*
 * Problem    : 98. Validate Binary Search Tree
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/validate-binary-search-tree/
 *
 * Approach   : Recursive Range Validation
 *              - Pass valid range [low, high) down the recursion.
 *              - At each node, check: low < root->val < high.
 *              - For left subtree: update high = root->val (left nodes must be smaller).
 *              - For right subtree: update low = root->val (right nodes must be larger).
 *              - Initialize with LLONG_MIN and LLONG_MAX to handle all values
 *                including INT_MIN and INT_MAX edge cases.
 *              - Naive child comparison alone is insufficient — a node's value
 *                must satisfy constraints from ALL its ancestors.
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
    bool check(TreeNode* root, long long low, long long high) {
        if (root == NULL)
            return true;

        if (root->val <= low || root->val >= high)
            return false;

        return check(root->left,  low,       root->val) &&
               check(root->right, root->val, high);
    }

    bool isValidBST(TreeNode* root) {
        return check(root, LLONG_MIN, LLONG_MAX);
    }
};
