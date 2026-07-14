/*
 * Problem    : 230. Kth Smallest Element in a BST
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/kth-smallest-element-in-a-bst/
 *
 * Approach   : Inorder Traversal (Left → Root → Right)
 *              - Inorder traversal of a BST yields elements in sorted
 *                (non-decreasing) order — this is the key BST property used here.
 *              - Perform standard recursive inorder traversal and collect
 *                all node values into a vector `ans`.
 *              - Return ans[k-1] (1-indexed, so subtract 1 for 0-indexed access).
 *
 * Time  Complexity : O(n) — every node is visited exactly once
 * Space Complexity : O(n) — storing all node values in the ans vector
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
    void inorder(TreeNode* root, vector<int>& ans) {
        if (root == NULL)
            return;

        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }

    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans;
        inorder(root, ans);
        return ans[k - 1];
    }
};
