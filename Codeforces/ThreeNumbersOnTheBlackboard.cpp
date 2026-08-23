```cpp
/*
    Problem: A. Three Numbers on the Blackboard
    Contest: Codeforces Round 1116 (Div. 2)

    Approach:
    - For three numbers a, b, c, the operation replaces two numbers
      with their sum.
    - We need the minimum possible difference between the maximum
      and minimum values after performing the operation.
    - Try all three possible pairs:
        (a,b), (a,c), (b,c)
    - Take the minimum difference.

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        long long ans = max({a, b, c}) - min({a, b, c});

        ans = min(ans, max({a + b, c}) - min({a + b, c}));
        ans = min(ans, max({a + c, b}) - min({a + c, b}));
        ans = min(ans, max({b + c, a}) - min({b + c, a}));

        cout << ans << '\n';
    }

    return 0;
}
```

**GitHub file name:** `ThreeNumbersOnTheBlackboard.cpp`
