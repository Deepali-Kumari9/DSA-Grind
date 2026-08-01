/*
    Problem: A. I Wanna Be the Guy
    Platform: Codeforces
    Language: C++17

    Approach:
    - Read all the levels completed by both players.
    - Store every level in a std::set.
    - Since a set keeps only unique elements, duplicate levels are removed automatically.
    - If the size of the set equals n, then every level is covered.
    - Otherwise, at least one level is missing.

    Time Complexity: O((p + q) log n)
    Space Complexity: O(n)

    Where:
    - n = total number of levels
    - p = levels Little X can pass
    - q = levels Little Y can pass
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> levels;

    int p;
    cin >> p;
    for (int i = 0; i < p; i++) {
        int x;
        cin >> x;
        levels.insert(x);
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int y;
        cin >> y;
        levels.insert(y);
    }

    if (levels.size() == n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";

    return 0;
}
