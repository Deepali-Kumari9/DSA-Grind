/*
 * Problem    : Exun and the Pizzas (EXUNPIZZA)
 * Platform   : CodeChef
 * URL        : https://www.codechef.com/problems/EXUNPIZZA
 *
 * Approach   : Simple Arithmetic
 *              - Chef has N pizzas, sells K to the Exunites.
 *              - Remaining pizzas = N - K.
 *              - Revenue from remaining pizzas = (N - K) * R.
 *
 * Time  Complexity : O(1)
 * Space Complexity : O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K, R;
    cin >> N >> K >> R;
    cout << (N - K) * R;
    return 0;
}
