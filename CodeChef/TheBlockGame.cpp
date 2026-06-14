/*
 * Problem          : The Block Game
 * Platform         : CodeChef (PALL01)
 * Difficulty       : 830
 *
 * Approach         : Reversed the number mathematically using
 *                    modulo and division. Compared reversed
 *                    number with original temp value.
 *                    If both are equal, number is a palindrome
 *                    — print "wins", else print "loses".
 *
 * Time Complexity  : O(t * log n)
 * Space Complexity : O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int temp = n;
        int digit = 0;
        while(n > 0){
            digit = digit*10 + n%10;
            n /= 10;
        }

        if (temp == digit){
            cout << "wins" << '\n';
        } else {
            cout << "loses" << '\n';
        }
    }
    return 0;
}
