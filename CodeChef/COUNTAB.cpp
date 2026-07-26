/*
    Problem: COUNTAB - Counting Characters
    Platform: CodeChef
    Language: C++17

    Approach:
    - Read the number of test cases.
    - For each test case:
        * Read the length of the string and the string itself.
        * Traverse the string once.
        * Count occurrences of 'a' and 'b'.
    - Print the count of 'a' followed by the count of 'b'.

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
        cin >> N;

        string s;
        cin >> s;

        int countA = 0, countB = 0;

        for (char ch : s) {
            if (ch == 'a')
                countA++;
            else
                countB++;
        }

        cout << countA << " " << countB << "\n";
    }

    return 0;
}
