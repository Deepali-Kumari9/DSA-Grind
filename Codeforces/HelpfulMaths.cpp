/*
 * Problem          : Helpful Maths
 * Platform         : Codeforces
 * Contest          : Codeforces Round 197 (Div. 2)
 * Problem          : A
 *
 * Approach 1       : Three separate loops — traversed string 3 times,
 *                    appending 1s, 2s, 3s in order with '+' between them.
 *                    Used pop_back() to remove trailing '+'.
 *                    Time Complexity : O(n) | Space Complexity : O(n)
 *
 * Approach 2       : Sort based — extracted all digits into a vector,
 *                    sorted it so 1s come before 2s before 3s,
 *                    then printed with '+' between them.
 *                    Time Complexity : O(n log n) | Space Complexity : O(n)
 */

// -------------------- Method 1 --------------------
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, ans = "";
    cin >> s;
    for (int i = 0; i < s.length(); i++){
        if (s[i]=='1') ans += "1+";
    }
    for (int i = 0; i < s.length(); i++){
        if (s[i]=='2') ans += "2+";
    }
    for (int i = 0; i < s.length(); i++){
        if (s[i]=='3') ans += "3+";
    }
    ans.pop_back();
    cout << ans;
    return 0;
}

// -------------------- Method 2 --------------------
//int main(){
//    string s;
//    cin >> s;
//
//    vector<char> nums;
//
//    for(char c : s){
//        if(c != '+')
//            nums.push_back(c);
//    }
//
//    sort(nums.begin(), nums.end());
//
//    for(int i = 0; i < nums.size(); i++){
//        cout << nums[i];
//        if(i != nums.size()-1)
//            cout << "+";
//    }
//
//    return 0;
//}
