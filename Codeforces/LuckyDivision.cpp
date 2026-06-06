/*
 * Problem          : Lucky Division
 * Platform         : Codeforces
 * Contest          : Codeforces Beta Round 91 (Div. 2 Only)
 * Problem          : A
 *
 * Approach 1       : Hardcoded all lucky numbers (digits only 4 & 7)
 *                    up to 4 digits. Checked if n is divisible by
 *                    any of them directly.
 *                    Time Complexity : O(1) | Space Complexity : O(1)
 *
 * Approach 2       : Used isLucky() function to check if a number
 *                    contains only digits 4 and 7. Iterated from
 *                    1 to n, checked if i is lucky and n % i == 0.
 *                    Time Complexity : O(n log n) | Space Complexity : O(1)
 */

// -------------------- Method 1 --------------------
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int lucky[] = {
        4, 7, 44, 47, 74, 77,
        444, 447, 474, 477,
        744, 747, 774, 777
    };

    for (int x : lucky) {
        if (n % x == 0) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}

// -------------------- Method 2 --------------------
//bool isLucky(int x) {
//    while (x > 0) {
//        int d = x % 10;
//        if (d != 4 && d != 7)
//            return false;
//        x /= 10;
//    }
//    return true;
//}
//
//int main() {
//    int n;
//    cin >> n;
//
//    for (int i = 1; i <= n; i++) {
//        if (isLucky(i) && n % i == 0) {
//            cout << "YES";
//            return 0;
//        }
//    }
//
//    cout << "NO";
//}
