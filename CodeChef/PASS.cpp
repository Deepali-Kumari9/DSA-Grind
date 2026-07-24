/*
    Problem: Pass
    Platform: CodeChef
    Contest: Starters 248
    Language: C++17

    Approach:
    - Read the scores of all 5 exams.
    - Count how many scores are at least 60.
    - Count how many scores are at least 30.
    - If there are at least 2 scores >= 60 and at least 4 scores >= 30,
      print "Pass"; otherwise print "Fail".

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int A[5];
        for(int i = 0; i < 5; i++)
            cin >> A[i];

        int c1 = 0, c2 = 0;
        for(int i = 0; i < 5; i++){
            if(A[i] >= 60) c1++;
            if(A[i] >= 30) c2++;
        }

        if(c1 >= 2 && c2 >= 4)
            cout << "Pass" << endl;
        else
            cout << "Fail" << endl;
    }

    return 0;
}
