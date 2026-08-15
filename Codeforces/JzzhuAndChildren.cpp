/*
    Problem: Jzzhu and Children
    Platform: Codeforces
    Language: C++17

    Approach:
    - Store all children indices in a queue.
    - For each child, give them m candies.
    - Subtract m from their required candies.
    - If they still need candies, push their index back into the queue.
    - If their candies become 0 or less, they leave the queue.
    - The last child to leave the queue is the answer.

    Time Complexity: O(sum(ai / m))
    Space Complexity: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    queue<int> q;

    for (int i = 0; i < n; i++) {
        q.push(i);
    }

    int ans = 0;

    while (!q.empty()) {
        int i = q.front();
        q.pop();

        a[i] -= m;

        if (a[i] > 0) {
            q.push(i);
        } else {
            ans = i + 1;
        }
    }

    cout << ans << endl;

    return 0;
}
