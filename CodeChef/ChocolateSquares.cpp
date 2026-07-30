/*
    Problem: Chocolate Squares
    Platform: CodeChef
    Language: C++17

    Approach:
    - The largest possible square side length that divides both the
      length and breadth without any leftover chocolate is the
      Greatest Common Divisor (GCD) of L and B.
    - Compute gcd(L, B) for each test case and print the result.

    Time Complexity: O(log(min(L, B))) per test case
    Space Complexity: O(1)

    where:
    - L = Length of the chocolate bar
    - B = Breadth of the chocolate bar
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int L, B;
        cin >> L >> B;

        cout << __gcd(L, B) << endl;
    }

    return 0;
}
