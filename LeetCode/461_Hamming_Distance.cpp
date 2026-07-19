/*
 * Problem    : 461. Hamming Distance
 * Platform   : LeetCode
 * URL        : https://leetcode.com/problems/hamming-distance/
 *
 * Approach   : XOR + Bit Counting
 *              - XOR (x ^ y) produces a number with 1s only at bit positions
 *                where x and y differ — this is exactly the Hamming distance definition.
 *              - Count the number of 1s in (x ^ y) using a simple bit loop:
 *                  - Check last bit: num % 2
 *                  - Right shift: num /= 2
 *                  - Repeat until num becomes 0.
 *              - The count of 1s in the XOR result equals the Hamming distance.
 *
 * Time  Complexity : O(log n) — number of bits in the XOR result
 * Space Complexity : O(1)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        int num = x ^ y;
        int count = 0;

        while (num) {
            count += num % 2;
            num /= 2;
        }

        return count;
    }
};
