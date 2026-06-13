/*
 * Problem          : Insert Greatest Common Divisors in Linked List
 * Platform         : LeetCode #2807
 * Difficulty       : Medium
 * Topic            : Linked List / Math
 *
 * Approach         : Traversed the list node by node.
 *                    For every pair of adjacent nodes, computed
 *                    their GCD using C++ built-in __gcd().
 *                    Created a new node with GCD value and
 *                    inserted it between the two nodes.
 *                    Moved curr to the node after inserted node.
 *
 * Time Complexity  : O(n * log(min(a,b)))
 * Space Complexity : O(n)
 */

class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr = head;

        while (curr && curr->next) {
            int g = gcd(curr->val, curr->next->val);

            ListNode* node = new ListNode(g);

            node->next = curr->next;
            curr->next = node;

            curr = node->next;
        }

        return head;
    }
};
