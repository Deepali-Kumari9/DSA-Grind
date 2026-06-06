/*
 * Problem          : Add Two Numbers
 * Platform         : CodeChef (FLOW001)
 * Difficulty       : 242
 *
 * Approach         : Read t test cases.
 *                    For each test case, read two integers a and b,
 *                    compute their sum and print it.
 *                    Used long long to avoid overflow.
 *
 * Time Complexity  : O(t)
 * Space Complexity : O(1)
 */

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        long long sum = a + b;
        cout << sum << endl;
    }
    return 0;
}
