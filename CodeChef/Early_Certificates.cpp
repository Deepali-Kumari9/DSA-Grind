# Early Certificates

**Platform:** CodeChef  
**Difficulty:** 595  
**Language:** C++  

## Problem
Given the names of two finalists, determine the longest common prefix between them. This prefix is guaranteed to be correct regardless of who wins and is engraved on the trophy before the match starts.

## Approach
- Read both strings.
- Traverse both strings simultaneously from the beginning.
- Keep adding characters while they are equal.
- Stop at the first mismatch.
- Print the constructed common prefix.

## Time Complexity
- **O(min(N, M))**

## Space Complexity
- **O(min(N, M))** (for storing the answer string)

## Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        string A, B;
        cin >> A >> B;

        string ans = "";
        int i = 0;

        while (i < N && i < M && A[i] == B[i]) {
            ans += A[i];
            i++;
        }

        cout << ans << "\n";
    }

    return 0;
}
```
