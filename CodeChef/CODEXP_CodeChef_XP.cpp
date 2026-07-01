/*
 * Problem    : CodeChef XP (CODEXP)
 * Platform   : CodeChef
 * Contest    : DSAMONDAY009
 * URL        : https://www.codechef.com/DSAMONDAY009/problems/CODEXP
 *
 * Approach   : Simple Arithmetic
 *              - Chef earns A XP per problem solved and B XP per editorial written.
 *              - Total XP = (A * P) + (B * E)
 *                where P = problems solved and E = editorials written today.
 *
 * Time  Complexity : O(1)
 * Space Complexity : O(1)
 */

#include <iostream>

int main() {
    int A, B, P, E;
    std::cin >> A >> B >> P >> E;
    std::cout << ((A * P) + (B * E));
    return 0;
}
