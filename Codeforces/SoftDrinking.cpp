/*
    Problem: Soft Drinking
    Platform: Codeforces
    Language: C++17

    Approach:
    - Calculate the total number of toasts possible from each resource:
      • Drink: (k × l) / nl
      • Lime slices: c × d
      • Salt: p / np
    - The limiting resource determines the maximum total toasts.
    - Divide by the number of friends (n) to get the answer.

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int drink = (k * l) / nl;
    int lime = c * d;
    int salt = p / np;

    cout << min({drink, lime, salt}) / n;

    return 0;
}
