/*
 * Problem    : Binary Tree Level Order Traversal
 * Platform   : LeetCode (102)
 * Difficulty : Medium
 * URL        : https://leetcode.com/problems/binary-tree-level-order-traversal/
 *
 * Approach   : Breadth First Search (Level Order Traversal)
 *
 *             - If the tree is empty, return an empty answer.
 *             - Use a queue to perform BFS.
 *             - Push the root node into the queue.
 *             - Process one level at a time:
 *                  • Store the current queue size.
 *                  • Remove all nodes of that level.
 *                  • Store their values in a vector.
 *                  • Push their left and right children.
 *             - Add every level vector into the final answer.
 *
 * Time Complexity : O(N)
 *                  Every node is visited exactly once.
 *
 * Space Complexity: O(N)
 *                  Queue stores at most one complete level.
 */

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>> ans;

        if (root == NULL)
            return ans;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {

            int n = q.size();
            vector<int> level;

            for (int i = 0; i < n; i++) {

                TreeNode* node = q.front();
                q.pop();

                level.push_back(node->val);

                if (node->left)
                    q.push(node->left);

                if (node->right)
                    q.push(node->right);
            }

            ans.push_back(level);
        }

        return ans;
    }
};
