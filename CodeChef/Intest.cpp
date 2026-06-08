/*
 * Problem        : Enormous Input Test
 * Platform       : CodeChef (INTEST)
 * Difficulty     : 464
 *
 * Approach       :
 * Read N and K.
 * Iterate through N integers.
 * For each integer, check if it is divisible by K.
 * If divisible, increment the counter.
 * Finally, print the count.
 *
 * Time Complexity : O(N)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int count = 0;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        if (a % k == 0) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
