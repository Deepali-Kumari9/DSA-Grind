```cpp
/*
    Problem: Bus Rows
    Platform: CodeChef
    Language: C++17

    Approach:
    - The bus has N rows, with M seats in each row.
    - Seats are numbered consecutively from 1 to N * M.
    - For a given seat X, first determine the row containing it.
    - Since each row contains M seats, the row number is:
          (X - 1) / M + 1
    - You can enter from either the front or the back of the bus.
    - If the seat is in row `row`:
          From front = row
          From back  = N - row + 1
    - Take the minimum of these two values.

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long N, M, X;
        cin >> N >> M >> X;

        long long row = (X - 1) / M + 1;

        cout << min(row, N - row + 1) << '\n';
    }

    return 0;
}
```

**GitHub file name:** `BusRows.cpp`
