/*
 * Problem          : Swapping Nodes in a Linked List
 * Platform         : LeetCode #1721
 * Topic            : Linked List, Two Pointers
 *
 * Approach         : Located the k-th node from the beginning.
 *                    Used another pointer to find the k-th
 *                    node from the end in a single traversal.
 *                    Swapped the values of both nodes instead
 *                    of modifying the links.
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 */

class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* first = head;

        for (int i = 1; i < k; i++) {
            first = first->next;
        }

        ListNode* temp = first;
        ListNode* second = head;

        while (temp->next) {
            temp = temp->next;
            second = second->next;
        }

        swap(first->val, second->val);

        return head;
    }
};
