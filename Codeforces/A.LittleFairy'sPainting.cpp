/*
 * Problem    : A. Little Fairy's Painting
 * Platform   : Codeforces
 * Contest    : Codeforces Round 1069 (Div. 2)
 * URL        : https://codeforces.com/contest/2175/problem/A
 *
 * Approach   : Set + MEX Construction
 *
 *              - Store all given numbers in a set to remove
 *                duplicate values and allow fast lookups.
 *
 *              - Let the current size of the set represent
 *                the smallest candidate value.
 *
 *              - While the value equal to the current set
 *                size is not present in the set, insert it.
 *
 *              - Every insertion increases the size of the
 *                set, so repeat the process until the value
 *                equal to the current size already exists.
 *
 *              - The final size of the set is the required
 *                answer.
 *
 * Time Complexity : O(N log N)
 *                  Inserting and searching in a set takes
 *                  O(log N), and each element is processed
 *                  a constant number of times.
 *
 * Space Complexity: O(N)
 *                  The set stores all distinct values.
 */

#include <bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        set<int> st;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            st.insert(x);
        }

        while (st.find((int)st.size()) == st.end()) {
            st.insert(st.size());
        }

        cout << st.size() << "\n";
    }

    return 0;
}
