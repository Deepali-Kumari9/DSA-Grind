```cpp
/*
    Problem: Creating Abbreviations
    Platform: Codeforces
    Contest: Codeforces Round 1117 (Div. 2)
    Problem: A

    Approach:
    - Store all starting letters of the original lowercase words.
    - An abbreviation can be created only if every character in it
      corresponds to an available starting letter.
    - Creating a new abbreviation does not introduce any new
      starting-letter possibility, because its first letter was
      already required to create that abbreviation.
    - Therefore, we can simply check every abbreviation against
      the initially available letters.

    Time Complexity: O(total length of all abbreviations)
    Space Complexity: O(26)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        set<char> available;

        // Store starting letters of the original words
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;

            available.insert(s[0] - 'a' + 'A');
        }

        vector<string> a(m);

        for (int i = 0; i < m; i++) {
            cin >> a[i];
        }

        bool changed = true;

        // Try to validate abbreviations
        while (changed) {
            changed = false;

            for (string s : a) {
                bool possible = true;

                for (char c : s) {
                    if (!available.count(c)) {
                        possible = false;
                        break;
                    }
                }

                if (possible) {
                    if (!available.count(s[0])) {
                        available.insert(s[0]);
                        changed = true;
                    }
                }
            }
        }

        bool ok = true;

        // Check whether every abbreviation can be formed
        for (string s : a) {
            for (char c : s) {
                if (!available.count(c)) {
                    ok = false;
                    break;
                }
            }

            if (!ok)
                break;
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}
```

**GitHub file name:** `CREATING_ABBREVIATIONS.cpp`
