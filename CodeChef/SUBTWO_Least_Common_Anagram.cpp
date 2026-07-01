/*
 * Problem    : Least Common Anagram (SUBTWO)
 * Platform   : CodeChef
 * Contest    : DSAMONDAY009
 * URL        : https://www.codechef.com/DSAMONDAY009/problems/SUBTWO
 *
 * Approach   : Frequency Intersection (Min Count Across All Strings)
 *              - For each input string, compute the frequency of each of the
 *                26 lowercase letters.
 *              - Maintain a global array mn[26] tracking the MINIMUM frequency
 *                of each letter across all N strings — this represents how many
 *                times that letter can appear in every string simultaneously.
 *              - To build the lexicographically smallest valid string of maximum
 *                length, append letter 'a' to 'z' in order, repeating each letter
 *                mn[i] times.
 *              - Appending in alphabetical order naturally produces the
 *                lexicographically smallest arrangement for the required multiset.
 *              - If no letter has a positive minimum frequency, output
 *                "no such string".
 *
 * Time  Complexity : O(N * L + 26) — L = average string length, N = number of strings
 * Space Complexity : O(26) — fixed-size frequency arrays
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> mn(26, INT_MAX);

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        vector<int> freq(26, 0);
        for (char c : s) {
            freq[c - 'a']++;
        }

        for (int j = 0; j < 26; j++) {
            mn[j] = min(mn[j], freq[j]);
        }
    }

    bool found = false;
    for (int i = 0; i < 26; i++) {
        while (mn[i]--) {
            cout << char(i + 'a');
            found = true;
        }
    }

    if (!found) {
        cout << "no such string";
    }

    return 0;
}
