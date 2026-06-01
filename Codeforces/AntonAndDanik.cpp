/*
 * Problem          : Anton and Danik
 * Platform         : Codeforces
 * Contest          : Codeforces Round 379 (Div. 2)
 * Problem          : A
 *
 * Approach         : Count occurrences of 'A' and 'D' in the string.
 *                    If count_A > count_D → Anton wins.
 *                    If count_D > count_A → Danik wins.
 *                    If equal → Friendship.
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int count_A = 0, count_D = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++){
        if (s[i] == 'A') count_A++;
        else count_D++;
    }
    if(count_A > count_D){
        cout << "Anton";
    }else if( count_D > count_A){
        cout << "Danik";
    }else{ cout << "Friendship";}
    return 0;
}
