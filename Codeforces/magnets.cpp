# A. Magnets

## Problem
On a table, there are `n` magnets placed one after another. Each magnet has one of two orientations:
- `10`
- `01`

Magnets with the same orientation belong to the same group if they are adjacent. Count the total number of groups.

## Approach
- Read the first magnet's orientation.
- Initialize the number of groups as `1`.
- Compare each subsequent magnet with the previous one.
- If the orientation changes, increment the group count.
- Update the previous magnet and continue.

## Time Complexity
- **O(n)**

## Space Complexity
- **O(1)**

## C++ Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string prev, curr;
    cin >> prev;

    int groups = 1;

    for (int i = 1; i < n; i++) {
        cin >> curr;
        if (curr != prev)
            groups++;
        prev = curr;
    }

    cout << groups;
    return 0;
}
