/*
 * Problem          : Pangram
 * Platform         : Codeforces
 * Contest          : Codeforces Round 295 (Div. 2)
 * Problem          : A
 *
 * Approach         : Inserted every character of the string
 *                    (converted to lowercase) into a set.
 *                    If set size == 26, all letters of the
 *                    alphabet are present — print YES.
 *                    Otherwise print NO.
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;

    set<char> st;
    for(char c : s){
        st.insert(tolower(c));
    }

    if(st.size() == 26){
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }

    return 0;
}
