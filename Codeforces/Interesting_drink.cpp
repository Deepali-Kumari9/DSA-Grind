/*
 * Problem    : B. Interesting drink
 * Platform   : Codeforces
 * Contest    : Codeforces Round 367 (Div. 2)
 * URL        : https://codeforces.com/problemset/problem/706/B
 *
 * Approach   : Sorting + Binary Search (upper_bound)
 *              - Sort the array of drink prices.
 *              - For each query x (budget), use upper_bound to find the first
 *                price strictly greater than x.
 *              - The number of drinks Vasya can buy = index of that iterator,
 *                which equals the count of prices <= x.
 *              - Sorting once in O(n log n) and answering each query in O(log n)
 *                makes this efficient for large inputs.
 *
 * Time  Complexity : O(n log n + q log n) — sort once, binary search per query
 * Space Complexity : O(n) — storing the price array
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> price(n);
    for (int i = 0; i < n; i++)
        cin >> price[i];

    sort(price.begin(), price.end());

    int q;
    cin >> q;

    while (q--) {
        int x;
        cin >> x;
        cout << upper_bound(price.begin(), price.end(), x) - price.begin() << endl;
    }

    return 0;
}
