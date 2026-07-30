/*
    Problem: A. Is your horseshoe on the other hoof?
    Platform: Codeforces
    Language: C++17

    Approach:
    - Store all four horseshoe colors in a set.
    - A set automatically removes duplicate values.
    - The number of duplicate horseshoes is:
        4 - (number of unique colors).
    - Print the result.

    Time Complexity: O(1)
    Space Complexity: O(1)

    where:
    - Only 4 horseshoe colors are processed.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    set<int> colors;
    colors.insert(s1);
    colors.insert(s2);
    colors.insert(s3);
    colors.insert(s4);

    cout << 4 - colors.size();

    return 0;
}
