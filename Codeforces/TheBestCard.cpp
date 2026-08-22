```cpp
/*
    Problem: A. The Best Card
    Contest: Educational Codeforces Round 193 (Rated for Div. 2)
    Platform: Codeforces
    Language: C++

    Approach:
    - For each n, check whether n + 1 is composite.
    - A number is composite if it has a divisor other than 1 and itself.
    - Precompute composite numbers using the Sieve of Eratosthenes.
    - Then answer each test case in O(1).

    Time Complexity:
    - Precomputation: O(MAXV log log MAXV)
    - Each test case: O(1)

    Space Complexity: O(MAXV)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    const int MAXV = 200002;

    // isComposite[i] = true if i is a composite number
    vector<bool> isComposite(MAXV + 1, false);

    isComposite[0] = true;
    isComposite[1] = true;

    // Sieve of Eratosthenes
    for (long long i = 2; i * i <= MAXV; i++) {
        if (!isComposite[i]) {
            for (long long j = i * i; j <= MAXV; j += i) {
                isComposite[j] = true;
            }
        }
    }

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int val = n + 1;

        cout << (isComposite[val] ? "YES" : "NO") << '\n';
    }

    return 0;
}
```

**GitHub file name:** `TheBestCard.cpp`
