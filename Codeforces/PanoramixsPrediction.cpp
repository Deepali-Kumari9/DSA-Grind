/*
    Problem: Panoramix's Prediction
    Platform: Codeforces
    Contest: Codeforces Beta Round 69 (Div. 2)
    Language: C++17

    Approach:
    - Store all prime numbers up to 53 in a vector.
    - Find the position of n in the prime list.
    - Check whether the next prime after n is equal to m.
    - Print "YES" if it matches, otherwise print "NO".

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};

    for (int i = 0; i < (int)primes.size() - 1; i++) {
        if (primes[i] == n) {
            if (primes[i + 1] == m)
                cout << "YES";
            else
                cout << "NO";
            break;
        }
    }

    return 0;
}
