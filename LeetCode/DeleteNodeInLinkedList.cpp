/*
 * Problem          : Delete Node in a Linked List
 * Platform         : LeetCode #237
 * Difficulty       : Medium
 * Topic            : Linked List
 *
 * Approach         : No access to head, only the node to delete.
 *                    Copied value of next node into current node.
 *                    Pointed current's next to next's next.
 *                    Effectively made the node "disappear"
 *                    by overwriting it with its successor.
 *
 * Time Complexity  : O(1)
 * Space Complexity : O(1)
 */

class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};
