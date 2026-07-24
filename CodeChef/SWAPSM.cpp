/*
    Problem: Swap Small
    Platform: CodeChef
    Contest: Starters 248
    Language: C++17

    Approach:
    - Read the array for each test case.
    - Perform a bubble-sort-like traversal.
    - Swap adjacent elements only if:
        * The left element is greater than the right element.
        * Their sum is less than or equal to 2.
    - Repeat the process until no better swaps remain.
    - Print the resulting lexicographically smallest array.

    Time Complexity: O(N²)
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

        vector<int> A(N);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N - 1; j++) {
                if (A[j] > A[j + 1] && A[j] + A[j + 1] <= 2) {
                    swap(A[j], A[j + 1]);
                }
            }
        }

        for (int x : A) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
