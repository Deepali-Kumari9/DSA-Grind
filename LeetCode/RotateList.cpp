/*
 * Problem          : Rotate List
 * Platform         : LeetCode #61
 * Difficulty       : Medium
 * Topic            : Linked List
 *
 * Approach         : Found the length of the list and connected
 *                    tail to head to make it circular.
 *                    Calculated actual rotation using k % n.
 *                    Moved to the new tail position (n - k steps)
 *                    and broke the circle there to get new head.
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 */

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0)
            return head;

        int n = 1;
        ListNode* tail = head;

        while (tail->next) {
            tail = tail->next;
            n++;
        }

        k %= n;

        if (k == 0)
            return head;

        tail->next = head;

        int steps = n - k;
        ListNode* newTail = head;

        for (int i = 1; i < steps; i++) {
            newTail = newTail->next;
        }

        ListNode* newHead = newTail->next;

        newTail->next = NULL;

        return newHead;
    }
};
