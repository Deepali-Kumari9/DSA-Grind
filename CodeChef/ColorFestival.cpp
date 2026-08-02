/*
    Problem: Color Festival (BOP2)
    Platform: CodeChef
    Language: C++17

    Approach:
    - The face changes color only when a new distinct color is encountered.
    - Since we can choose the visiting order, all friends with the same color
      can be visited consecutively.
    - Therefore, the minimum number of jolts is equal to the number of
      distinct colors.
    - Use a set to store unique colors and output its size.

    Time Complexity: O(N log N)
    Space Complexity: O(N)

    Where:
    - N = number of friends
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        set<int> colors;

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            colors.insert(x);
        }

        cout << colors.size() << endl;
    }

    return 0;
}
