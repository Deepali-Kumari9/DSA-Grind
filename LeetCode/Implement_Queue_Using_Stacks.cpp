/*
 * Problem          : Implement Queue using Stacks
 * Platform         : LeetCode #232
 * Difficulty       : Easy
 * Topic            : Stack / Queue
 *
 * Approach         : Used two stacks (s1 and s2).
 *                    Push operations are performed on s1.
 *                    For pop and peek, transfer all
 *                    elements from s1 to s2 only when
 *                    s2 is empty, maintaining FIFO order.
 *
 * Time Complexity  : Push  -> O(1)
 *                    Pop   -> Amortized O(1)
 *                    Peek  -> Amortized O(1)
 * Space Complexity : O(n)
 */

class MyQueue {
public:
    stack<int> s1, s2;

    MyQueue() {
    }

    void push(int x) {
        s1.push(x);
    }

    int pop() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        int val = s2.top();
        s2.pop();
        return val;
    }

    int peek() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        return s2.top();
    }

    bool empty() {
        return s1.empty() && s2.empty();
    }
};
