/*
 * Problem    : 225. Implement Stack using Queues
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/implement-stack-using-queues/
 *
 * Approach   : Two Queue Simulation
 *              - Use two queues q1 and q2 to simulate LIFO (stack) behavior.
 *              - push(x)  : Simply enqueue x into q1. O(1)
 *              - pop()    : Move all elements except the last from q1 to q2,
 *                           capture the last element (stack top), then swap
 *                           q1 and q2 to restore the primary queue. O(n)
 *              - top()    : Same as pop() but also push the captured element
 *                           into q2 before swapping, so it isn't lost. O(n)
 *              - empty()  : Return whether q1 is empty. O(1)
 *              - The key insight: the last element pushed is always at the back
 *                of q1; draining everything else exposes it at the front.
 *
 * Time  Complexity : push — O(1) | pop/top — O(n)
 * Space Complexity : O(n) — stores all elements across two queues
 */

#include <bits/stdc++.h>
using namespace std;

class MyStack {
public:
    queue<int> q1, q2;

    MyStack() {}

    void push(int x) {
        q1.push(x);
    }

    int pop() {
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }
        int ans = q1.front();
        q1.pop();
        swap(q1, q2);
        return ans;
    }

    int top() {
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }
        int ans = q1.front();
        q2.push(q1.front());
        q1.pop();
        swap(q1, q2);
        return ans;
    }

    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
