/*
 * Problem          : Lucky Four
 * Platform         : CodeChef (LUCKYFR)
 * Difficulty       : Easy
 *
 * Approach         : For each test case:
 *                    1. Read the given number.
 *                    2. Convert it to a string.
 *                    3. Traverse each digit of the string.
 *                    4. Count how many times the digit '4' appears.
 *                    5. Print the count for that test case.
 *
 * Time Complexity  : O(D) per test case,
 *                    where D is the number of digits in the number.
 * Space Complexity : O(D) (for storing the number as a string)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int count = 0;
        string str = to_string(n);

        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '4') {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
