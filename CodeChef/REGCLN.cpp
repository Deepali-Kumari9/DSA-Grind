
### Problem

Chef does a deep cleaning every 10 days, on days `10, 20, 30, ...`.

Given the current day `N`, find how many days remain until the next cleaning day strictly after today.

### Approach

We can use the remainder when `N` is divided by `10`.

* `N % 10` gives how many days have passed since the last cleaning day.
* Therefore, the number of days until the next cleaning is:

`10 - (N % 10)`

For example:

* `N = 24` → `24 % 10 = 4` → answer = `10 - 4 = 6`
* `N = 27` → answer = `3`
* `N = 30` → answer = `10` because the next cleaning **strictly after** day 30 is day 40.

### Complexity

* **Time:** `O(1)`
* **Space:** `O(1)`

### File

`REGCLN.cpp`

### Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    cout << 10 - (N % 10) << endl;

    return 0;
}
```

### Key Learning

This is a simple **modulo arithmetic** problem. Whenever an event repeats after a fixed interval, `%` is often the easiest way to find the distance to the next occurrence.

#CodeChef #DSA #CompetitiveProgramming #CPP #ProblemSolving #Coding
