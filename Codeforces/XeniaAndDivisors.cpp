/*
    Problem: Xenia and Divisors
    Platform: Codeforces
    Language: C++17

    Approach:
    - Count how many times each number from 1 to 7 occurs.
    - The required groups can only be:
        1 2 4
        1 2 6
        1 3 6
    - Numbers 5 and 7 cannot be used, so if they occur, the answer is -1.
    - First, use all 3s to form (1,3,6) groups.
    - Then use all 4s to form (1,2,4) groups.
    - The remaining 2s must form (1,2,6) groups.
    - Check that the available counts are exactly sufficient.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> cnt(8, 0);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
    }

    // 5 and 7 cannot belong to any valid group
    if (cnt[5] > 0 || cnt[7] > 0) {
        cout << -1 << "\n";
        return 0;
    }

    // Number of groups of type (1, 2, 6)
    int c126 = cnt[6] - cnt[3];

    // Not enough 6s to pair with all 3s
    if (cnt[3] > cnt[6]) {
        cout << -1 << "\n";
        return 0;
    }

    // Number of groups of type (1, 2, 4)
    int c124 = cnt[4];

    // Number of groups of type (1, 3, 6)
    int c136 = cnt[3];

    // Check number of 1s
    if (cnt[1] != c124 + c136 + c126) {
        cout << -1 << "\n";
        return 0;
    }

    // Check number of 2s
    if (cnt[2] != c124 + c126) {
        cout << -1 << "\n";
        return 0;
    }

    // Print (1, 2, 4)
    while (c124 > 0) {
        cout << "1 2 4\n";
        c124--;
    }

    // Print (1, 3, 6)
    while (c136 > 0) {
        cout << "1 3 6\n";
        c136--;
    }

    // Print (1, 2, 6)
    while (c126 > 0) {
        cout << "1 2 6\n";
        c126--;
    }

    return 0;
}
