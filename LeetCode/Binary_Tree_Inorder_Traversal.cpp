/*
 * Problem    : 94. Binary Tree Inorder Traversal
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/binary-tree-inorder-traversal/
 *
 * Approach   : Iterative Inorder Traversal using Stack
 *              - Instead of recursion, use an explicit stack to simulate the call stack.
 *              - Keep going left and pushing nodes onto the stack until NULL is reached.
 *              - Pop the top node, record its value, then move to its right subtree.
 *              - Repeat until both the current node is NULL and the stack is empty.
 *              - Inorder sequence: Left → Root → Right
 *
 * Time  Complexity : O(n) — every node is visited exactly once
 * Space Complexity : O(n) — stack holds at most h nodes (h = height of tree)
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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> st;

        while (root != NULL || !st.empty()) {
            // Reach the leftmost node
            while (root != NULL) {
                st.push(root);
                root = root->left;
            }

            // Process the node
            root = st.top();
            st.pop();
            ans.push_back(root->val);

            // Move to the right subtree
            root = root->right;
        }

        return ans;
    }
};
