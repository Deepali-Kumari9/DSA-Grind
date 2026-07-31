/*
    Problem: 637. Average of Levels in Binary Tree
    Platform: LeetCode
    Language: C++17

    Approach:
    - Perform a level-order traversal (BFS) using a queue.
    - For each level:
        - Count the number of nodes.
        - Compute the sum of their values.
        - Store (sum / levelSize) in the answer vector.
    - Continue until all levels are processed.

    Time Complexity: O(N)
    Space Complexity: O(W)

    where:
    - N = number of nodes in the binary tree
    - W = maximum width of the tree
*/

class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;

        if (root == nullptr)
            return ans;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int levelSize = q.size();
            long long sum = 0;

            for (int i = 0; i < levelSize; i++) {
                TreeNode* node = q.front();
                q.pop();

                sum += node->val;

                if (node->left != nullptr)
                    q.push(node->left);

                if (node->right != nullptr)
                    q.push(node->right);
            }

            ans.push_back((double)sum / levelSize);
        }

        return ans;
    }
};
