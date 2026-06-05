/*
 * Problem          : Queue at the School
 * Platform         : Codeforces
 * Contest          : Codeforces Round 163 (Div. 2)
 * Problem          : B
 *
 * Approach         : Simulated t seconds of the process.
 *                    In each second, scanned the string left to right.
 *                    Whenever 'B' is followed by 'G', swapped them
 *                    and skipped the next position (i++) to avoid
 *                    swapping the same pair twice in one second.
 *
 * Time Complexity  : O(t * n)
 * Space Complexity : O(n)
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    string s;
    cin >> s;

    while(t--)
    {
        for(int i = 0; i < n - 1; i++)
        {
            if(s[i] == 'B' && s[i + 1] == 'G')
            {
                swap(s[i], s[i + 1]);
                i++; // skip next position
            }
        }
    }

    cout << s;
}
