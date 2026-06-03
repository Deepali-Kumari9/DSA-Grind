/*
 * Problem          : Middle of the Linked List
 * Platform         : LeetCode #876
 * Difficulty       : Easy
 * Topic            : Linked List / Two Pointers
 *
 * Approach         : Used Fast & Slow pointer technique.
 *                    Slow pointer moves 1 step at a time,
 *                    fast pointer moves 2 steps at a time.
 *                    When fast reaches the end, slow is
 *                    exactly at the middle node.
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 */

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};
