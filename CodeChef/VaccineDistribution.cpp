/*
    Problem: Vaccine Distribution
    Platform: CodeChef
    Language: C++17

    Approach:
    - Read the vaccine strengths and infection levels into two arrays.
    - Sort both arrays in non-decreasing order.
    - Pair the weakest vaccine with the least infected patient.
    - If any vaccine strength is less than or equal to the corresponding
      infection level, it is impossible to cure every patient.
    - Otherwise, every patient can be assigned a suitable vaccine.

    Time Complexity: O(N log N)
    Space Complexity: O(N)

    where:
    - N = Number of vaccines/patients
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> V(N), P(N);

    for (int i = 0; i < N; i++) {
        cin >> V[i];
    }

    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }

    sort(V.begin(), V.end());
    sort(P.begin(), P.end());

    for (int i = 0; i < N; i++) {
        if (V[i] <= P[i]) {
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";

    return 0;
}
