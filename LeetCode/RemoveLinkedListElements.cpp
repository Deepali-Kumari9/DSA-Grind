/*
 * Problem          : Remove Linked List Elements
 * Platform         : LeetCode #203
 * Difficulty       : Easy
 * Topic            : Linked List
 *
 * Approach         : Created a dummy node pointing to head to handle
 *                    edge cases (like removing head itself).
 *                    Traversed list with curr pointer — if next node's
 *                    value matches val, skip it by rewiring pointer.
 *                    Otherwise move curr forward.
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 */

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* curr = dummy;

        while (curr->next != nullptr){
            if (curr->next->val == val){
                curr->next = curr->next->next;
            } else {
                curr = curr->next;
            }
        }

        return dummy->next;
    }
};
