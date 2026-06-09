/*
 * Problem          : Odd Even Linked List
 * Platform         : LeetCode #328
 * Difficulty       : Medium
 * Topic            : Linked List
 *
 * Approach         : Maintained two separate pointers for odd
 *                    and even indexed nodes.
 *                    Kept weaving them forward alternately.
 *                    Connected end of odd chain to head of
 *                    even chain at the end.
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 */

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenHead = even;

        while (even != nullptr && even->next != nullptr) {
            odd->next = even->next;
            odd = odd->next;

            even->next = odd->next;
            even = even->next;
        }

        odd->next = evenHead;

        return head;
    }
};
