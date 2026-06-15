/*
 * Problem          : Partition List
 * Platform         : LeetCode #86
 * Difficulty       : Medium
 * Topic            : Linked List
 *
 * Approach         : Created two separate dummy-headed lists —
 *                    small list for nodes less than x and
 *                    large list for nodes >= x.
 *                    Traversed original list and appended each
 *                    node to the correct list.
 *                    Connected end of small list to large list.
 *                    Set large->next = nullptr to avoid cycle.
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 */

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode smallDummy(0);
        ListNode largeDummy(0);
        ListNode* small = &smallDummy;
        ListNode* large = &largeDummy;
        ListNode* curr = head;

        while (curr) {
            if (curr->val < x) {
                small->next = curr;
                small = small->next;
            } else {
                large->next = curr;
                large = large->next;
            }
            curr = curr->next;
        }

        large->next = nullptr;
        small->next = largeDummy.next;
        return smallDummy.next;
    }
};
