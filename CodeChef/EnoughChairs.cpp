```cpp
/*
    Problem: Enough Chairs
    Platform: CodeChef
    Language: C++17

    Approach:
    - There are N tables and K chairs are placed around each table.
    - Therefore, the total number of available chairs is N * K.
    - Compare the total chairs with the number of students P.
    - If N * K >= P, everyone can be seated, so print "YES".
    - Otherwise, print "NO".

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K, P;
    cin >> N >> K >> P;

    if (N * K >= P) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
```

**GitHub file name:** `EnoughChairs.cpp`
