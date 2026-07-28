/*
    Problem: Body Mass Index (BMI)
    Platform: CodeChef
    Language: C++17

    Approach:
    - For each test case, read the mass (M) and height (H).
    - Compute BMI using the formula:
        BMI = M / (H × H)
    - Determine the category based on the BMI value:
        • BMI ≤ 18       → Category 1
        • 19 ≤ BMI ≤ 24  → Category 2
        • 25 ≤ BMI ≤ 29  → Category 3
        • BMI ≥ 30       → Category 4
    - Print the corresponding category number.

    Time Complexity: O(T)
    Space Complexity: O(1)

    where:
    - T = Number of test cases
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int M, H;
        cin >> M >> H;

        int bmi = M / (H * H);

        if (bmi <= 18)
            cout << 1 << endl;
        else if (bmi <= 24)
            cout << 2 << endl;
        else if (bmi <= 29)
            cout << 3 << endl;
        else
            cout << 4 << endl;
    }

    return 0;
}
