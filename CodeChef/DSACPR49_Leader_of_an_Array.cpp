/*
 * Problem    : Leader of an Array (DSACPR49)
 * Platform   : CodeChef
 * Contest    : DSAMONDAY009
 * URL        : https://www.codechef.com/DSAMONDAY009/problems/DSACPR49
 *
 * Approach   : Right-to-Left Scan with Running Maximum
 *              - An element is a leader if it is strictly greater than all
 *                elements to its right; the rightmost element is always a leader.
 *              - Traverse the array from right to left, maintaining the maximum
 *                seen so far (mx).
 *              - Whenever the current element is strictly greater than mx,
 *                it qualifies as a leader — add it to the answer and update mx.
 *              - Since elements are collected right-to-left, reverse the result
 *                at the end to restore the original left-to-right order.
 *
 * Time  Complexity : O(n) — single right-to-left pass
 * Space Complexity : O(n) — storing the leaders
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    vector<long long> ans;
    long long mx = LLONG_MIN;

    for (int i = N - 1; i >= 0; i--) {
        if (a[i] > mx) {
            ans.push_back(a[i]);
            mx = a[i];
        }
    }

    reverse(ans.begin(), ans.end());

    for (long long x : ans) {
        cout << x << " ";
    }

    return 0;
}
