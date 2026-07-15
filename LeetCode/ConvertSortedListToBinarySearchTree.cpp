/*
 * Problem          : Convert Sorted List to Binary Search Tree
 * Platform         : LeetCode #109
 * Difficulty       : Medium
 * Topic            : Linked List, Binary Search Tree, Divide & Conquer
 *
 * Approach         : Used the slow and fast pointer technique
 *                    to find the middle node of the linked list.
 *                    The middle node becomes the root of the BST.
 *                    Recursively built the left subtree from the
 *                    left half and the right subtree from the
 *                    right half of the list, producing a
 *                    height-balanced BST.
 *
 * Time Complexity  : O(n log n)
 * Space Complexity : O(log n)
 */

class Solution {
public:
    TreeNode* build(ListNode* head) {
        if (head == NULL)
            return NULL;

        if (head->next == NULL)
            return new TreeNode(head->val);

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;

        while (fast && fast->next) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        if (prev)
            prev->next = NULL;

        TreeNode* root = new TreeNode(slow->val);

        if (head != slow)
            root->left = build(head);

        root->right = build(slow->next);

        return root;
    }

    TreeNode* sortedListToBST(ListNode* head) {
        return build(head);
    }
};
