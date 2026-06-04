/*
 * Problem          : Merge Two Sorted Lists
 * Platform         : LeetCode #21
 * Difficulty       : Easy
 * Topic            : Linked List
 *
 * Approach         : Used a dummy node + tail pointer.
 *                    Compared nodes from both lists one by one
 *                    and attached the smaller one to the result.
 *                    After the loop, attached the remaining
 *                    nodes of whichever list is left.
 *
 * Time Complexity  : O(n + m)
 * Space Complexity : O(1)
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode* tail = &dummy;

        while(list1 && list2){
            if(list1->val <= list2->val){
                tail->next = list1;
                list1 = list1->next;
            }
            else{
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }

        if(list1)
            tail->next = list1;
        else
            tail->next = list2;

        return dummy.next;
    }
};
