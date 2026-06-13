/*
 * Problem          : Wrong Subtraction
 * Platform         : Codeforces
 * Contest          : Codeforces Round 479 (Div. 3)
 * Problem          : A
 *
 * Approach         : Simulated k operations on n.
 *                    If last digit of n is 0, divide n by 10.
 *                    Otherwise subtract 1 from n.
 *                    Repeated this k times and printed result.
 *
 * Time Complexity  : O(k)
 * Space Complexity : O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    int k;
    cin >> n >> k;

    while (k--) {
        if (n % 10 == 0)
            n /= 10;
        else
            n--;
    }

    cout << n << endl;
    return 0;
}
