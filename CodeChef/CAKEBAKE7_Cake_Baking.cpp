/*
 * Problem    : Cake Baking (CAKEBAKE7)
 * Platform   : CodeChef
 * URL        : https://www.codechef.com/problems/CAKEBAKE7
 *
 * Approach   : Mathematical Observation
 *              - Every customer must get at least 1 cake (no unhappy customers).
 *              - A customer is happy only if they get 2 or more cakes.
 *              - To maximize happy customers: give 1 cake to as many as needed,
 *                and use remaining cakes to make customers happy (2 per customer).
 *              - With N customers and M cakes (M >= N):
 *                  - Give 1 cake to each of the N customers first (uses N cakes).
 *                  - Remaining cakes = M - N, each can make one more customer happy.
 *                  - But happy customers can't exceed N total customers.
 *                  - Answer = min(N, M - N)
 *
 * Time  Complexity : O(1)
 * Space Complexity : O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    cout << min(N, M - N);
    return 0;
}
