/*
 * Problem    : A. Divisible Permutation
 * Platform   : Codeforces
 * Contest    : Codeforces Round 1077 (Div. 2)
 * URL        : https://codeforces.com/contest/2188/problem/A
 *
 * Approach   : Greedy Construction
 *              - Start by placing 1 and n at the beginning of the permutation
 *                (pushed in reverse order, so n is at back first).
 *              - For each step i from (n-2) down to 1, look at the last placed
 *                element (prev) and try to place (prev - i) if it's valid and unused.
 *              - If (prev - i) is out of range or already used, place (prev + i) instead.
 *              - After building, reverse the array to get the final permutation order.
 *              - The greedy ensures consecutive absolute differences are divisible
 *                by their position index.
 *              - Fast I/O used to handle multiple test cases efficiently.
 *
 * Time  Complexity : O(n) per test case
 * Space Complexity : O(n) for the permutation and used arrays
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

        vector<int> p;
        vector<bool> used(n + 1, false);

        p.push_back(1);
        p.push_back(n);
        used[1] = used[n] = true;

        for (int i = n - 2; i >= 1; i--) {
            int prev = p.back();

            if (prev - i >= 1 && !used[prev - i]) {
                p.push_back(prev - i);
                used[prev - i] = true;
            } else {
                p.push_back(prev + i);
                used[prev + i] = true;
            }
        }

        reverse(p.begin(), p.end());

        for (int x : p)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}
