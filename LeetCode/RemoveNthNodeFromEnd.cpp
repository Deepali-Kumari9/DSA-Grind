/*
 * Problem          : Remove Nth Node From End of List
 * Platform         : LeetCode #19
 * Difficulty       : Medium
 * Topic            : Linked List / Two Pointers
 *
 * Approach         : Used dummy node + two pointer technique.
 *                    Moved fast pointer n+1 steps ahead from dummy.
 *                    Then moved both fast and slow together until
 *                    fast hits null. At that point slow is just
 *                    before the node to delete.
 *                    Did slow->next = slow->next->next to remove it.
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* fast = dummy;
        ListNode* slow = dummy;

        for (int i = 0; i <= n; i++) {
            fast = fast->next;
        }

        while (fast != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        slow->next = slow->next->next;

        return dummy->next;
    }
};
