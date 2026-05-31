/*
 * Problem     : Taxi
 * Platform    : Codeforces
 * Contest     : VK Cup 2012 - Qualification Round 1
 * Problem     : B
 *
 * Approach    : Count groups of 1, 2, 3, 4 people.
 *               Fill taxis with groups of 4 first,
 *               then pair groups of 3 with 1s,
 *               then pair groups of 2 together,
 *               finally fill remaining 1s (4 per taxi).
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , x;
    cin >> n;
    int c1 =0, c2=0, c3=0 , c4 = 0;
    for (int i = 0; i < n; i++){
        cin >> x;
        if (x==1) c1++;
        if (x==2) c2++;
        if (x==3) c3++;
        if (x==4) c4++;
    }
    int taxis = c4;
    taxis += c3;
    c1 = max(0, c1-c3);

    taxis += c2/2;
    if (c2 % 2 != 0){
        taxis += 1;
        c1 = max(0, c1-2);
    }
    taxis += (c1 + 3)/4;
    cout << taxis ;
    return 0;
}
