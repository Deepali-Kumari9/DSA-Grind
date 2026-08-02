/*
    Problem: A. Cheap Travel
    Platform: Codeforces
    Language: C++17

    Approach:
    - Calculate the total cost using three possible strategies:
      1. Buy all rides as single tickets.
      2. Buy as many special tickets as possible and the remaining as single tickets.
      3. Buy only special tickets (even if one covers extra rides).
    - The answer is the minimum among these three costs.

    Time Complexity: O(1)
    Space Complexity: O(1)

    Where:
    - n = number of rides
    - m = rides covered by one special ticket
    - a = cost of one single ticket
    - b = cost of one special ticket
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int option1 = n * a;
    int option2 = (n / m) * b + (n % m) * a;
    int option3 = ((n + m - 1) / m) * b;

    cout << min(option1, min(option2, option3)) << endl;

    return 0;
}
