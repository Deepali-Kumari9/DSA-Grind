/*
    Problem: Candy Distribution
    Platform: CodeChef
    Difficulty: Easy

    Approach:
    - Compute the total candies required by all children.
    - If the total required is less than or equal to C, print "Yes".
    - Otherwise, print "No".

    Time Complexity: O(N)
    Space Complexity: O(N)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, C;
    cin >> N >> C;

    int A[N];
    int sum = 0;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        sum += A[i];
    }

    if (sum <= C)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
