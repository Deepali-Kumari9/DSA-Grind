/*
 * Problem    : A. Boy or Girl
 * Platform   : Codeforces
 * Contest    : Codeforces Round 146 (Div. 2)
 * URL        : https://codeforces.com/problemset/problem/236/A
 *
 * Approach   : Set-based Unique Character Count
 *              - Insert all characters of the string into a set to get
 *                only the distinct characters (duplicates are ignored).
 *              - If the number of distinct characters is even → "CHAT WITH HER!"
 *              - If the number of distinct characters is odd  → "IGNORE HIM!"
 *              - Using a set handles deduplication automatically in O(n log n).
 *
 * Time  Complexity : O(n log n) — inserting n characters into a set
 * Space Complexity : O(1)       — at most 26 distinct lowercase letters in the set
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    set<char> st;
    for (char c : s)
        st.insert(c);

    if (st.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}
