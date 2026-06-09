/*
 * Problem          : Soldier and Bananas
 * Platform         : Codeforces
 * Contest          : Codeforces Round 304 (Div. 2)
 * Problem          : A
 *
 * Approach 1       : Iterated from 1 to w, summed up k*i for each
 *                    banana count i. If total cost <= n, output 0
 *                    else output tc - n.
 *                    Time Complexity : O(w) | Space Complexity : O(1)
 *
 * Approach 2       : Used direct math formula.
 *                    Total cost = k * w * (w+1) / 2
 *                    Output max(0, total - n).
 *                    Time Complexity : O(1) | Space Complexity : O(1)
 */

// -------------------- Method 1 --------------------
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k, w;
    long long n;
    long long tc = 0;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++){
        tc += k*i;
    }
    if(tc <= n){
        cout << 0;
    }
    else{
        cout << tc - n;
    }
    return 0;
}

// -------------------- Method 2 --------------------
//int main() {
//    long long k, n, w;
//    cin >> k >> n >> w;
//
//    long long total = k * w * (w + 1) / 2;
//
//    cout << max(0LL, total - n);
//
//    return 0;
//}
