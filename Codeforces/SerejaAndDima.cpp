/*
 * Problem          : Sereja and Dima
 * Platform         : Codeforces
 * Contest          : Codeforces Round 223 (Div. 2)
 * Problem          : A
 *
 * Approach         : Used two pointers (left & right) on the array.
 *                    Even turns go to Sereja, odd turns go to Dima.
 *                    Each player greedily picks the larger of the
 *                    two ends and adds it to their score.
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(n)
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[100005]={0};
    long long s = 0;
    long long d = 0;
    int left = 0, right = n-1;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        if(i%2==0){
            if(a[left] > a[right]){
                s += a[left];
                left++;
            } else {
                s += a[right];
                right--;
            }
        }
        else{
            if(a[left] > a[right]){
                d += a[left];
                left++;
            } else {
                d += a[right];
                right--;
            }
        }
    }
    cout << s << " "<< d;
    return 0;
}
