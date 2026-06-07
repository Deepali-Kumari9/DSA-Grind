/*
 * Problem          : Even Odds
 * Platform         : Codeforces
 * Contest          : Codeforces Round 188 (Div. 2)
 * Problem          : A
 *
 * Approach         : In range [1, n], there are (n+1)/2 odd numbers
 *                    and n/2 even numbers.
 *                    If k <= oddCount, the answer is the k-th odd number
 *                    which is 2*k - 1.
 *                    If k > oddCount, the answer is the (k - oddCount)-th
 *                    even number which is 2*(k - oddCount).
 *
 * Time Complexity  : O(1)
 * Space Complexity : O(1)
 */

#include <iostream>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long oddCount = (n + 1) / 2;

    if (k <= oddCount) {
        cout << 2 * k - 1;
    } else {
        cout << 2 * (k - oddCount);
    }

    return 0;
}
