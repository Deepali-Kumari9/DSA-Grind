/*
 * Problem          : Delete the Middle Node of a Linked List
 * Platform         : LeetCode #2095
 * Difficulty       : Medium
 * Topic            : Linked List / Two Pointers
 *
 * Approach         : Used Fast & Slow pointer technique.
 *                    Maintained a prev pointer to track node
 *                    before slow. Slow moves 1 step, fast moves
 *                    2 steps. When fast hits end, slow is at
 *                    middle — did prev->next = slow->next to delete.
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 */

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return nullptr;

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;

        while (fast != nullptr && fast->next != nullptr) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        prev->next = slow->next;

        return head;
    }
};
