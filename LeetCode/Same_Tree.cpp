# Same_Tree.cpp

## 📌 Problem
**100. Same Tree**  
**Platform:** LeetCode  
**Difficulty:** Easy

## 📝 Problem Statement
Given the roots of two binary trees `p` and `q`, determine whether they are the same.

Two binary trees are considered the same if they are structurally identical and the corresponding nodes have the same value.

## 💡 Approach
- Use recursion to compare both trees simultaneously.
- If both nodes are `NULL`, they are identical at this position.
- If one node is `NULL` and the other is not, the trees are different.
- If the values of the current nodes differ, return `false`.
- Otherwise, recursively compare the left and right subtrees.
- The trees are the same only if both left and right subtrees are identical.

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(h)`
  - `h` is the height of the tree due to the recursive call stack.

## 💻 Solution

```cpp
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL) {
            return true;
        }

        if (p == NULL || q == NULL) {
            return false;
        }

        if (p->val != q->val) {
            return false;
        }

        return isSameTree(p->left, q->left) &&
               isSameTree(p->right, q->right);
    }
};
```

## ✅ Key Idea
Recursively compare corresponding nodes of both trees. The trees are identical only if every pair of nodes has the same value and the same structure.
