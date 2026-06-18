/*
 * Problem          : Min Stack
 * Platform         : LeetCode #155
 * Difficulty       : Medium
 * Topic            : Stack
 *
 * Approach         : Used two stacks — one for actual values
 *                    and one to track minimums.
 *                    On every push, min stack stores
 *                    min(current value, previous minimum).
 *                    On pop, both stacks pop together.
 *                    getMin() returns top of min stack in O(1).
 *
 * Time Complexity  : O(1) for all operations
 * Space Complexity : O(n)
 */

class MinStack {
    stack<int> st;
    stack<int> minSt;

public:
    MinStack() {
    }

    void push(int val) {
        st.push(val);

        if(minSt.empty())
            minSt.push(val);
        else
            minSt.push(min(val, minSt.top()));
    }

    void pop() {
        st.pop();
        minSt.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return minSt.top();
    }
};
