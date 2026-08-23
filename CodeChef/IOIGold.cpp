```cpp
/*
    Problem: IOI Gold
    Platform: CodeChef

    Approach:
    - N is Chef's score.
    - G is the gold medal cutoff.
    - Chef gets a gold medal if his score is at least G.
    - Therefore, check whether N >= G.

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, G;
    cin >> N >> G;

    if (N >= G)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
```

**GitHub file name:** `IOIGold.cpp`
