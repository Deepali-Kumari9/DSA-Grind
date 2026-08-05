/*
    Problem: Kefa and First Steps
    Platform: Codeforces
    Language: C++17

    Approach:
    - Traverse the array while maintaining the length of the current non-decreasing segment.
    - If the current element is greater than or equal to the previous one,
      extend the segment.
    - Otherwise, start a new segment from the current element.
    - Continuously update the maximum segment length.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int curr = 1;
    int ans = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] >= a[i - 1])
            curr++;
        else
            curr = 1;

        ans = max(ans, curr);
    }

    cout << ans;
    return 0;
}
