📄 **AMUSING_JOKE.cpp**

**Codeforces Round 101 (Div. 2) – A: Amusing Joke**
**Platform:** Codeforces
**Language:** C++17

### 📝 Problem

Given three strings, determine whether the characters of the first two strings together can be rearranged to form the third string.

### 💡 Approach

* Combine the first two strings.
* Sort the combined string and the third string.
* If they are equal, print `YES`; otherwise, print `NO`.

### ⏱️ Complexity

* **Time:** O(N log N)
* **Space:** O(N)

### 💻 C++ Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;

    a += b;

    sort(a.begin(), a.end());
    sort(c.begin(), c.end());

    if (a == c)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
```
