/*
 * Problem          : Reverse The Number
 * Platform         : CodeChef (FLOW007)
 * Difficulty       : 588
 *
 * Approach         : For each test case, reversed the number
 *                    mathematically using modulo and division.
 *                    Extracted last digit using n%10, built
 *                    reversed number using rev*10 + digit.
 *                    Reset rev to 0 after each test case.
 *
 * Time Complexity  : O(t * log n)
 * Space Complexity : O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n;
    int rev = 0;
    while(t--){
        cin >> n;
        while(n > 0){
            rev = rev*10 + (n%10);
            n /= 10;
        }
        cout << rev << endl;
        rev = 0;
    }
    return 0;
}
