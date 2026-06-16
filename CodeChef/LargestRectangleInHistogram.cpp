/*
 * Problem          : Largest Rectangle in Histogram
 * Platform         : CodeChef (DSAMONDAY007 - PREP22)
 *
 * Approach         : Used monotonic stack to find left and right
 *                    boundaries for each bar.
 *                    Left boundary: nearest bar to left that is
 *                    greater than or equal to current bar.
 *                    Right boundary: nearest bar to right that is
 *                    greater than or equal to current bar.
 *                    Width = right[i] - left[i] - 1.
 *                    Answer = max of A[i] * width for all i.
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(n)
 */

long long largestRectangleArea(int N, vector<int>& A) {
    vector<long> left(N), right(N);
    stack<int> st;

    for (int i = 0; i < N; i++) {
        while (!st.empty() && A[st.top()] >= A[i])
            st.pop();
        left[i] = st.empty() ? -1 : st.top();
        st.push(i);
    }

    while (!st.empty()) st.pop();

    for (int i = N - 1; i >= 0; i--) {
        while (!st.empty() && A[st.top()] >= A[i])
            st.pop();
        right[i] = st.empty() ? N : st.top();
        st.push(i);
    }

    long long ans = 0;
    for (int i = 0; i < N; i++) {
        long long width = right[i] - left[i] - 1;
        ans = max(ans, A[i] * width);
    }

    return ans;
}
