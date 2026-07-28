/*
    Problem: Football (96A)
    Platform: Codeforces
    Language: C++17

    Approach:
    - Traverse the string while counting consecutive identical characters.
    - Initialize the count as 1.
    - If the current character matches the previous one, increment the count.
    - Otherwise, reset the count to 1.
    - If the count reaches 7 at any point, print "YES".
    - If the traversal finishes without finding 7 consecutive identical
      characters, print "NO".

    Time Complexity: O(n)
    Space Complexity: O(1)

    where:
    - n = Length of the string
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 1;

    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1])
            count++;
        else
            count = 1;

        if (count == 7) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}
