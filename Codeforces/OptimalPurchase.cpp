/*
 * Problem          : Optimal Purchase
 * Platform         : Codeforces
 * Contest          : Educational Codeforces Round 190 (Rated for Div. 2)
 * Problem          : A
 *
 * Approach         : Divided n items into groups of 3.
 *                    If b >= 3*a, buying individually is cheaper
 *                    so cost = n * a.
 *                    Otherwise, buy as many groups of 3 at price b,
 *                    and remaining items at min(rem*a, b).
 *
 * Time Complexity  : O(t)
 * Space Complexity : O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while(t--){
        long long n, a, b;
        cin >> n >> a >> b;

        long long ans;
        long long groups = n / 3;
        long long rem = n % 3;

        if (b >= 3*a){
            ans = 1LL * n * a;
        }
        else{
            ans = groups * b + min(rem * a, (long long)b);
        }
        cout << ans << "\n";
    }
    return 0;
}
