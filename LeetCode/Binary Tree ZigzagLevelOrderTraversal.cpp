/*
 * Problem    : Binary Tree Zigzag Level Order Traversal
 * Platform   : LeetCode (103)
 * Difficulty : Medium
 * URL        : https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/
 *
 * Approach   : Breadth-First Search (BFS) + Deque
 *
 *              - If the tree is empty, return an empty result.
 *              - Use a queue to perform level-order traversal.
 *              - Maintain a boolean flag (leftToRight) to
 *                determine the traversal direction.
 *              - For each level:
 *                    • If traversing left to right, insert
 *                      node values at the back of the deque.
 *                    • Otherwise, insert them at the front.
 *              - Convert the deque into a vector and store
 *                it in the final answer.
 *              - Toggle the traversal direction after each
 *                level.
 *
 * Time Complexity : O(N)
 *                  Every node is visited exactly once.
 *
 * Space Complexity: O(N)
 *                  Queue and deque together store at most
 *                  one level of the tree.
 */

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        vector<vector<int>> result;

        if (!root)
            return result;

        queue<TreeNode*> q;
        q.push(root);

        bool leftToRight = true;

        while (!q.empty()) {

            int size = q.size();
            deque<int> level;

            for (int i = 0; i < size; i++) {

                TreeNode* node = q.front();
                q.pop();

                if (leftToRight)
                    level.push_back(node->val);
                else
                    level.push_front(node->val);

                if (node->left)
                    q.push(node->left);

                if (node->right)
                    q.push(node->right);
            }

            result.push_back(vector<int>(level.begin(), level.end()));

            leftToRight = !leftToRight;
        }

        return result;
    }
};
