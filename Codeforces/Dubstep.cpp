/*
    Problem: Dubstep (208A)
    Platform: Codeforces
    Language: C++17

    Approach:
    - Traverse the given string from left to right.
    - Whenever the substring "WUB" is found, treat it as a word separator.
    - Add a single space to the answer only if the previous character
      is not already a space.
    - Otherwise, append the current character to the answer.
    - Remove any trailing space before printing the final decoded song.

    Time Complexity: O(n)
    Space Complexity: O(n)

    where:
    - n = Length of the input string
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string ans = "";

    for (int i = 0; i < s.length();) {

        if (i + 2 < s.length() && s.substr(i, 3) == "WUB") {

            if (!ans.empty() && ans.back() != ' ')
                ans += ' ';

            i += 3;
        }
        else {
            ans += s[i];
            i++;
        }
    }

    if (!ans.empty() && ans.back() == ' ')
        ans.pop_back();

    cout << ans;

    return 0;
}
