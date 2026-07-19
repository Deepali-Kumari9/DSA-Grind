# Chef and Donation

**Platform:** CodeChef  
**Difficulty:** 305  
**Language:** C++

## Problem
Chef earns **X** rupees while Chefina earns **Y** rupees, where **Y > X**. To make their final earnings equal, Chefina donates the difference between their incomes to charity.

Find the amount donated for each test case.

## Approach
- Read the number of test cases.
- For each test case:
  - Read `X` and `Y`.
  - The donation amount is simply `Y - X`.
- Print the result.

## Time Complexity
- **O(1)** per test case.

## Space Complexity
- **O(1)**

## Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        cout << (Y - X) << endl;
    }

    return 0;
}
```
