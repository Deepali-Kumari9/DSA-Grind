/*
    Problem: Factory Production
    Platform: CodeChef
    Difficulty: Medium

    Approach:
    - Use Binary Search on the answer (time).
    - For a given time, calculate the total items produced by all machines.
    - If at least X items can be produced, try a smaller time.
    - Otherwise, increase the time.

    Time Complexity: O(N log 1e18)
    Space Complexity: O(N)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, X;
    cin >> N >> X;

    vector<long long> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    long long low = 1, high = 1e18;

    while (low < high) {
        long long mid = low + (high - low) / 2;

        long long items = 0;

        for (int i = 0; i < N; i++) {
            items += mid / A[i];
            if (items >= X)
                break;
        }

        if (items >= X)
            high = mid;
        else
            low = mid + 1;
    }

    cout << low << endl;

    return 0;
}
