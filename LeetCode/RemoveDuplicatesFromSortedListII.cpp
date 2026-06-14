/*
 * Problem          : Remove Duplicates from Sorted List II
 * Platform         : LeetCode #82
 * Difficulty       : Medium
 * Topic            : Linked List
 *
 * Approach         : Used dummy node + prev pointer.
 *                    When duplicate group detected, moved curr
 *                    past all nodes with same value.
 *                    Set prev->next = curr to skip entire group.
 *                    If no duplicate, moved prev forward normally.
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 */

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* prev = &dummy;
        ListNode* curr = head;

        while (curr) {
            if (curr->next && curr->val == curr->next->val) {
                int val = curr->val;
                while (curr && curr->val == val) {
                    curr = curr->next;
                }
                prev->next = curr;
            } else {
                prev = curr;
                curr = curr->next;
            }
        }

        return dummy.next;
    }
};
