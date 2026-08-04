/*
    Problem: Balanced Ingredients
    Platform: CodeChef
    Language: C++17

    Approach:
    - Store the four ingredient values in an array.
    - Generate all possible non-empty subsets using bitmasking.
    - Compute the sum of each selected subset.
    - If any subset has a sum equal to 0, print "Yes".
    - Otherwise, print "No".

    Time Complexity: O(2^4 × 4) = O(1)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int arr[4] = {a, b, c, d};

    for (int mask = 1; mask < 16; mask++) {
        int sum = 0;

        for (int i = 0; i < 4; i++) {
            if (mask & (1 << i))
                sum += arr[i];
        }

        if (sum == 0) {
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";
    return 0;
}
