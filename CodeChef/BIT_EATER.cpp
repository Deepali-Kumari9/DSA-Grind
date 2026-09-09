📄 **BIT_EATER.cpp**

**CodeChef – Bit Eater (BIEAT)**

**Problem:**
Given an array of non-negative integers and `M`, remove the `M` least significant bits from the binary representation of every element and print the resulting array.

**💡 Approach:**

* Removing `M` least significant bits is equivalent to dividing the number by `2^M`.
* Calculate `2^M` using `1LL << M`.
* Divide every array element by this value and print the result.

**⏱️ Complexity:**
Time: `O(N)`
Space: `O(N)`

**💻 C++ Solution:**

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int M;
    cin >> M;

    long long divisor = 1LL << M;

    for (int i = 0; i < N; i++) {
        cout << A[i] / divisor;

        if (i != N - 1)
            cout << " ";
    }

    cout << endl;

    return 0;
}
```
