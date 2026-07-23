# Invert_Binary_Tree.cpp

## 📌 Problem
**226. Invert Binary Tree**  
**Platform:** LeetCode  
**Difficulty:** Easy

## 📝 Problem Statement
Given the `root` of a binary tree, invert the tree and return its root.

## 💡 Approach
- Use recursion to invert the binary tree.
- If the current node is `NULL`, return it.
- Swap the left and right child of the current node.
- Recursively invert the left subtree and the right subtree.
- Return the root after all nodes have been processed.

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
  - Each node is visited exactly once.
- **Space Complexity:** `O(h)`
  - `h` is the height of the tree due to the recursive call stack.

## 💻 Solution

```cpp
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) {
            return root;
        }

        swap(root->left, root->right);

        root->left = invertTree(root->left);
        root->right = invertTree(root->right);

        return root;
    }
};
```

## ✅ Key Idea
Recursively swap the left and right child of every node. Once every node has been processed, the entire binary tree becomes its mirror image.
