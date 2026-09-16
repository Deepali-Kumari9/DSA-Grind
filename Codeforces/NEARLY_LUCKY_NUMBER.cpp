📄 **NEARLY_LUCKY_NUMBER.cpp**

**Codeforces Beta Round 84 (Div. 2 Only) – A: Nearly Lucky Number**
**Platform:** Codeforces
**Language:** C++17

**Problem:**
A number is called nearly lucky if the number of lucky digits (`4` and `7`) in it is itself a lucky number. Check whether the given number is nearly lucky.

💡 **Approach:**

* Count the digits `4` and `7` in the number.
* If the count is `4` or `7`, print `YES`.
* Otherwise, print `NO`.

⏱️ **Complexity:**

* Time: `O(N)`
* Space: `O(1)`

💻 **C++ Solution:**

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;

    int count = 0;

    for (char c : n) {
        if (c == '4' || c == '7') {
            count++;
        }
    }

    if (count == 4 || count == 7) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
```
