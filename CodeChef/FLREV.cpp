```cpp
/*
    Problem: Flower Reversal
    Platform: CodeChef
    Contest: Starters 253

    Approach:
    - Beauty is the number of adjacent pairs having the same color.
    - First, calculate the current beauty of the string.
    - Count the number of "01" and "10" transitions.
    - If there are at least two transitions of either type, a reversal
      can increase the beauty by 2.
    - Otherwise, check whether a reversal can increase the beauty by 1.
    - Take the maximum possible beauty after at most one reversal.

    Time Complexity: O(N)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        string S;

        cin >> N >> S;

        int beauty = 0;

        // Calculate the initial beauty
        for (int i = 0; i < N - 1; i++) {
            if (S[i] == S[i + 1]) {
                beauty++;
            }
        }

        int cnt01 = 0, cnt10 = 0;

        // Count transitions between different colors
        for (int i = 0; i < N - 1; i++) {
            if (S[i] == '0' && S[i + 1] == '1') {
                cnt01++;
            }

            if (S[i] == '1' && S[i + 1] == '0') {
                cnt10++;
            }
        }

        // A reversal can improve beauty by 2
        if (cnt01 >= 2 || cnt10 >= 2) {
            beauty += 2;
        }
        else {
            // Check if beauty can be improved by 1
            for (int i = 0; i < N - 1; i++) {
                if (S[i] != S[i + 1]) {
                    if (S[i + 1] == S[0] || S[i] == S[N - 1]) {
                        beauty++;
                        break;
                    }
                }
            }
        }

        cout << beauty << endl;
    }

    return 0;
}
```

**GitHub file name:** `FLREV.cpp`
