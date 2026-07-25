/*
    Problem: SNCKYEAR - Chef and SnackDown
    Platform: CodeChef
    Language: C++17

    Approach:
    - Store all SnackDown hosting years in a vector.
    - For each test case, read the given year.
    - Check if the year exists in the vector.
    - Print "HOSTED" if found, otherwise print "NOT HOSTED".

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    vector<int> hostedYears = {2010, 2015, 2016, 2017, 2019};

    while (T--) {
        int year;
        cin >> year;

        bool found = false;

        for (int hostedYear : hostedYears) {
            if (year == hostedYear) {
                found = true;
                break;
            }
        }

        if (found)
            cout << "HOSTED\n";
        else
            cout << "NOT HOSTED\n";
    }

    return 0;
}
