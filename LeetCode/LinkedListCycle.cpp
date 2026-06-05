/*
 * Problem          : Linked List Cycle
 * Platform         : LeetCode #141
 * Difficulty       : Easy
 * Topic            : Linked List / Two Pointers
 *
 * Approach         : Used Fast & Slow pointer technique.
 *                    Slow moves 1 step, fast moves 2 steps.
 *                    If there is a cycle, fast will eventually
 *                    meet slow. If fast hits NULL, no cycle exists.
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 */

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
                return true;
        }

        return false;
    }
};
