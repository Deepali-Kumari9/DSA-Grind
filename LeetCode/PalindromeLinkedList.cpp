/*
 * Problem          : Palindrome Linked List
 * Platform         : LeetCode #234
 * Difficulty       : Easy
 * Topic            : Linked List / Two Pointers
 *
 * Approach         : Used Fast & Slow pointers to find the middle.
 *                    Reversed the second half of the list in-place.
 *                    Compared both halves node by node.
 *                    If all values match, it is a palindrome.
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 */

class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* prev = nullptr;

        while(head){
            ListNode* nextNode = head->next;
            head->next = prev;
            prev = head;
            head = nextNode;
        }

        return prev;
    }

    bool isPalindrome(ListNode* head) {

        ListNode* slow = head;
        ListNode* fast = head;

        // Find middle
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse second half
        ListNode* secondHalf = reverse(slow);

        // Compare both halves
        ListNode* firstHalf = head;

        while(secondHalf){
            if(firstHalf->val != secondHalf->val)
                return false;

            firstHalf = firstHalf->next;
            secondHalf = secondHalf->next;
        }

        return true;
    }
};
