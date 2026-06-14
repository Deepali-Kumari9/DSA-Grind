/*
 * Problem          : The 67th Integer Problem
 * Platform         : Codeforces
 * Contest          : Codeforces Round 1090 (Div. 4)
 * Problem          : A
 *
 * Approach         : For each test case, if x < 67 then the
 *                    next integer greater than x is x+1.
 *                    If x >= 67, the answer is always 67
 *                    since we need the smallest integer >= 67.
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
        int x;
        cin >> x;
        if(x < 67){
            cout << x+1 << '\n';
        } else {
            cout << 67 << '\n';
        }
    }
    return 0;
}
