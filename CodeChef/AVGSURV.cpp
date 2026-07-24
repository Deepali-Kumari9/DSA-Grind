/*
    Problem: Average Survival
    Platform: CodeChef
    Contest: Starters 248
    Language: C++17

    Approach:
    - Read the array elements.
    - Find the maximum element in the array.
    - Count how many times the maximum element appears.
    - Since only the maximum elements can survive after repeatedly
      removing elements smaller than the average, the answer is the
      frequency of the maximum element.

    Time Complexity: O(N)
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

        int A[N];
        int maxi = INT_MIN;
        int counti = 0;

        for (int i = 0; i < N; i++) {
            cin >> A[i];
            maxi = max(maxi, A[i]);
        }

        for (int i = 0; i < N; i++) {
            if (A[i] == maxi)
                counti++;
        }

        cout << counti << endl;
    }

    return 0;
}
