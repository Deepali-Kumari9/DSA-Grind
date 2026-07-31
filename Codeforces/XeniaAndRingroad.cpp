/*
    Problem: B. Xenia and Ringroad
    Platform: Codeforces
    Language: C++17

    Approach:
    - Start from house 1.
    - For each task:
      - If the target house is ahead of or equal to the current house,
        move directly and add the forward distance.
      - Otherwise, complete one full wrap around the ring and then
        move to the target house.
    - Update the current position after each task.
    - The accumulated distance is the answer.

    Time Complexity: O(M)
    Space Complexity: O(1)

    where:
    - N = Number of houses
    - M = Number of tasks
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    long long ans = 0;
    int current = 1;

    while (m--) {
        int target;
        cin >> target;

        if (target >= current) {
            ans += target - current;
        } else {
            ans += (n - current) + target;
        }

        current = target;
    }

    cout << ans;

    return 0;
}
