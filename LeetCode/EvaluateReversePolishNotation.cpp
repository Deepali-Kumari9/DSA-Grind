/*
 * Problem          : Evaluate Reverse Polish Notation
 * Platform         : LeetCode #150
 * Difficulty       : Medium
 * Topic            : Stack
 *
 * Approach         : Used a stack to evaluate the expression.
 *                    For every token, if it's a number push it.
 *                    If it's an operator, pop two elements —
 *                    first popped is b, second is a.
 *                    Apply operator (a op b) and push result.
 *                    Final answer is at the top of the stack.
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(n)
 */

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (string token : tokens) {
            if (token == "+" || token == "-" ||
                token == "*" || token == "/") {
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                if (token == "+")
                    st.push(a + b);
                else if (token == "-")
                    st.push(a - b);
                else if (token == "*")
                    st.push(a * b);
                else
                    st.push(a / b);
            } else {
                st.push(stoi(token));
            }
        }
        return st.top();
    }
};
