```cpp
/*
    Problem: Presentation
    Platform: CodeChef

    Approach:
    - The presentation must last exactly 600 seconds.
    - Each slide takes 30 seconds.
    - Chef already has N slides, so they take N * 30 seconds.
    - Remaining time = 600 - (N * 30).
    - Divide the remaining time by 30 to get the number of
      additional slides required.

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    cout << (600 - N * 30) / 30 << endl;

    return 0;
}
```

**GitHub file name:** `Presentation.cpp`
