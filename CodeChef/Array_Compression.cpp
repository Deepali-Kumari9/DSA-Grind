/*
    Problem: Array Compression
    Platform: CodeChef
    Language: C++17

    Approach:
    - The minimum possible length of the array is equal to the number of
      contiguous groups of distinct values.
    - Start with a count of 1 for the first group.
    - Traverse the array from left to right.
    - Whenever the current element differs from the previous one,
      a new group starts, so increment the count.
    - Print the total number of groups.

    Time Complexity: O(N)
    Space Complexity: O(N)

    where:
    - N = Number of elements in the array
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int count = 1;

    for (int i = 1; i < N; i++) {
        if (A[i] != A[i - 1]) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
