/*
    Problem: Pen Shortage
    Platform: CodeChef
    Difficulty: Easy

    Approach:
    - Chef needs one pen for each student.
    - He already has P pens.
    - Additional pens required = N - P.

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, P;
    cin >> N >> P;

    cout << (N - P);

    return 0;
}
