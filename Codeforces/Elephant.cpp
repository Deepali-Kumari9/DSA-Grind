/*
 * Problem          : Elephant
 * Platform         : Codeforces
 * Contest          : Codeforces Round 340 (Div. 2)
 * Problem          : A
 *
 * Approach         : Elephant moves in steps of max 5 meters.
 *                    To cover n meters, minimum steps needed
 *                    is ceiling division of n by 5.
 *                    Used (n+4)/5 trick for integer ceiling division.
 *
 * Time Complexity  : O(1)
 * Space Complexity : O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    count = (n+4)/5;
    cout << count;
    return 0;
}
