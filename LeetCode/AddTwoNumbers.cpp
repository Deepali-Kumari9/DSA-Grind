/*
 * Problem          : Add Two Numbers
 * Platform         : LeetCode #2
 * Difficulty       : Medium
 * Topic            : Linked List / Math
 *
 * Approach         : Used a dummy node and simulated addition
 *                    digit by digit with a carry.
 *                    Traversed both lists simultaneously,
 *                    adding values + carry at each step.
 *                    Created new nodes for each digit result.
 *                    Handled leftover carry at the end.
 *
 * Time Complexity  : O(max(m, n))
 * Space Complexity : O(max(m, n))
 */

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        int carry = 0;

        while (l1 || l2 || carry) {
            int sum = carry;
            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }
            carry = sum / 10;
            curr->next = new ListNode(sum % 10);
            curr = curr->next;
        }

        return dummy->next;
    }
};
