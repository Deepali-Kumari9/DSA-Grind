/*
 * Problem          : Bear and Big Brother
 * Platform         : Codeforces
 * Contest          : Codeforces Round 405 (Div. 2, based on VK Cup 2017 Round 1)
 * Problem          : A
 *
 * Approach         : Simulated the growth year by year.
 *                    Each year Limak's weight is multiplied by 3
 *                    and his brother's weight is multiplied by 2.
 *                    Counted the years until Limak's weight
 *                    strictly exceeds his brother's weight.
 *
 * Time Complexity  : O(log b/a) — grows very fast so very few iterations
 * Space Complexity : O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    int years = 0;
    while(a <= b){
        a = a*3;
        b = b*2;
        years++;
    }
    cout << years;
    return 0;
}
