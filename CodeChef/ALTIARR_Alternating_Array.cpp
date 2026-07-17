/*
    Problem: Alternating Array
    Platform: CodeChef

    Approach:
    - There are only two possible valid alternating patterns:
        1. Even indices -> Odd numbers, Odd indices -> Even numbers.
        2. Even indices -> Even numbers, Odd indices -> Odd numbers.
    - Count the number of changes required for both patterns.
    - The answer is the minimum of the two counts.

    Time Complexity: O(N) per test case
    Space Complexity: O(N)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> a(N);
        for (int i = 0; i < N; i++) {
            cin >> a[i];
        }

        int changes1 = 0;
        int changes2 = 0;

        for (int i = 0; i < N; i++) {
            // Pattern 1: Even index -> Odd, Odd index -> Even
            if (i % 2 == 0) {
                if (a[i] % 2 == 0)
                    changes1++;
            } else {
                if (a[i] % 2 != 0)
                    changes1++;
            }

            // Pattern 2: Even index -> Even, Odd index -> Odd
            if (i % 2 == 0) {
                if (a[i] % 2 != 0)
                    changes2++;
            } else {
                if (a[i] % 2 == 0)
                    changes2++;
            }
        }

        cout << min(changes1, changes2) << "\n";
    }

    return 0;
}
