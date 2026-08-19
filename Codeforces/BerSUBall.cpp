```cpp
/*
    Problem: BerSU Ball
    Platform: Codeforces
    Language: C++17

    Approach:
    - Sort both arrays of skill levels.
    - Use two pointers to match boys and girls.
    - If the skill difference is at most 1, they can form a pair.
      Move both pointers forward and increase the count.
    - If the boy's skill is smaller, move the boy pointer forward.
    - Otherwise, move the girl pointer forward.
    - This greedy approach maximizes the number of valid pairs.

    Time Complexity: O(n log n + m log m)
    Space Complexity: O(n + m)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int m;
    cin >> m;

    vector<int> b(m);
    for (int i = 0; i < m; i++)
        cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0, count = 0;

    while (i < n && j < m) {
        if (abs(a[i] - b[j]) <= 1) {
            count++;
            i++;
            j++;
        }
        else if (a[i] < b[j]) {
            i++;
        }
        else {
            j++;
        }
    }

    cout << count << endl;

    return 0;
}
```

**GitHub file name:** `BerSUBall.cpp`
