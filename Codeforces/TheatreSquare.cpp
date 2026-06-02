/*
 * Problem          : Theatre Square
 * Platform         : Codeforces
 * Contest          : Codeforces Beta Round 1
 * Problem          : A
 *
 * Approach         : To cover an n×m rectangle with a×a flagstones,
 *                    calculate how many flagstones fit along each
 *                    dimension using ceiling division: ceil(n/a) * ceil(m/a).
 *                    Used (n+a-1)/a trick for integer ceiling division.
 *
 * Time Complexity  : O(1)
 * Space Complexity : O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, m, a;
    cin >> n >> m >> a;
    long long x, y;
    long long min_fg = 0;
    x = (n+a-1)/a;
    y = (m+a-1)/a;
    min_fg = x*y;
    cout << min_fg;
    return 0;
}
