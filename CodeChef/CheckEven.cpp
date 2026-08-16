```cpp
/*
    Problem: Check Even
    Platform: CodeChef
    Language: C++17

    Approach:
    - We are given a range [L, R].
    - We need to check whether there is at least one even number in this range.
    - Iterate through all numbers from L to R.
    - If any number is divisible by 2, set found = true and stop.
    - Print "Yes" if an even number exists, otherwise print "No".

    Time Complexity: O(R - L + 1)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int L, R;
    cin >> L >> R;

    bool found = false;

    for (int i = L; i <= R; i++) {
        if (i % 2 == 0) {
            found = true;
            break;
        }
    }

    cout << (found ? "Yes" : "No");

    return 0;
}
```


