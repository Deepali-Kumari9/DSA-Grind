/*
    Problem: Up-Down Palindrome
    Platform: CodeChef
    Language: C++17

    Approach:
    - Compare symmetric pairs of the array.
    - For each pair:
        - If the values differ by more than 2,
          forming a palindrome is impossible.
        - Otherwise, maintain the valid range of X
          that satisfies the operation for every pair.
    - If all pairs have at least one common valid value of X,
      print "Yes"; otherwise print "No".

    Time Complexity: O(N)
    Space Complexity: O(1)

    where:
    - N = Length of the array
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<long long> a(N);

        for (int i = 0; i < N; i++)
            cin >> a[i];

        bool ok = true;
        long long lo = LLONG_MIN;
        long long hi = LLONG_MAX;

        for (int i = 0; i < N / 2; i++) {
            long long x = a[i];
            long long y = a[N - 1 - i];

            if (x == y)
                continue;

            if (abs(x - y) == 2) {
                ok = false;
                break;
            }

            long long l = min(x, y);

            lo = max(lo, l);
            hi = min(hi, l + 1);

            if (lo > hi) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "Yes" : "No") << "\n";
    }

    return 0;
}
