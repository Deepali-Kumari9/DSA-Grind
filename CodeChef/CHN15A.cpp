/*
    Problem: CHN15A - Mutated Minions
    Platform: CodeChef
    Language: C++17

    Approach:
    - Read the number of test cases.
    - For each test case, read N (number of minions) and K (increment value).
    - Traverse all minions and add K to each characteristic value.
    - If the updated value is divisible by 7, increment the count.
    - Print the total count of Wolverine-like minions.

    Time Complexity: O(N)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        int count = 0;

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;

            if ((x + K) % 7 == 0)
                count++;
        }

        cout << count << endl;
    }

    return 0;
}
