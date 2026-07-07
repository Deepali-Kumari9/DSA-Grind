/*
 * Problem      : Fonta
 * Platform     : CodeChef
 * Problem Code : FONTA
 * Difficulty   : 193
 * URL          : https://www.codechef.com/problems/FONTA
 *
 * Approach     : String Checking
 *
 *                - Read the input string S of length 5.
 *                - A drink is considered "fanta-like" if its
 *                  last three characters are:
 *
 *                        'n' 't' 'a'
 *
 *                - Check whether:
 *
 *                        S[2] == 'n'
 *                        S[3] == 't'
 *                        S[4] == 'a'
 *
 *                - If all three conditions are true, print
 *                  "Yes"; otherwise, print "No".
 *
 * Time Complexity : O(1)
 *                  Only three character comparisons are made.
 *
 * Space Complexity: O(1)
 *                  No extra space is used.
 */

#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    if (s[2] == 'n' && s[3] == 't' && s[4] == 'a') {
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}
