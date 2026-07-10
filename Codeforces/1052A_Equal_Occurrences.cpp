/*
 * Problem    : A. Equal Occurrences
 * Platform   : Codeforces
 * Contest    : Codeforces Round 1052 (Div. 2)
 * URL        : https://codeforces.com/contest/2146/problem/A
 *
 * Approach   : Frequency Map + Brute Force over k
 *              - Build a frequency map of all elements in the array.
 *              - Extract all frequency values into a vector f.
 *              - For each possible value k from 1 to 100:
 *                  - Count how many elements have frequency >= k (call it cnt).
 *                  - These cnt elements can each contribute exactly k occurrences.
 *                  - Total elements used = cnt * k.
 *                  - Track the maximum cnt * k across all k values.
 *              - The answer is the maximum total elements that can be selected
 *                such that every chosen value appears exactly k times.
 *
 * Time  Complexity : O(n + D * 100) per test case — D = number of distinct elements
 * Space Complexity : O(D) — frequency map storage
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        map<int, int> freq;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }

        vector<int> f;
        for (auto &p : freq)
            f.push_back(p.second);

        int ans = 0;
        for (int k = 1; k <= 100; k++) {
            int cnt = 0;
            for (int x : f) {
                if (x >= k)
                    cnt++;
            }
            ans = max(ans, cnt * k);
        }

        cout << ans << "\n";
    }

    return 0;
}
