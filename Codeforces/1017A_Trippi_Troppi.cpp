/*
 * Problem    : A. Trippi Troppi
 * Platform   : Codeforces
 * Contest    : Codeforces Round 1017 (Div. 4)
 * URL        : https://codeforces.com/contest/2094/problem/A
 *
 * Approach   : First Character Extraction
 *              - Given three strings a, b, c (each being a phrase),
 *                output the first character of each string concatenated.
 *              - Simply access a[0], b[0], c[0] and print them together.
 *              - This forms the abbreviation of the three-word phrase.
 *
 * Time  Complexity : O(1) per test case
 * Space Complexity : O(1)
 */

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string a, b, c;
        cin >> a >> b >> c;
        cout << a[0] << b[0] << c[0] << endl;
    }

    return 0;
}
