/*
    Problem: 191. Number of 1 Bits
    Platform: LeetCode
    Difficulty: Easy

    Approach:
    - Repeatedly check whether the least significant bit is 1.
    - If it is, increment the count.
    - Divide the number by 2 (right shift equivalent) until it becomes 0.

    Time Complexity: O(log n)
    Space Complexity: O(1)
*/

class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;

        while (n > 0) {
            if (n % 2 == 1)
                count++;

            n /= 2;
        }

        return count;
    }
};
