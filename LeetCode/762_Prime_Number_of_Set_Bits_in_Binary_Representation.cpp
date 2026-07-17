/*
    Problem: 762. Prime Number of Set Bits in Binary Representation
    Platform: LeetCode
    Difficulty: Easy

    Approach:
    - Iterate through every number in the given range.
    - Count the number of set bits using __builtin_popcount().
    - Check whether the count is prime.
    - Increment the answer if it is.

    Time Complexity: O((right - left + 1) × √32)
    Space Complexity: O(1)
*/

class Solution {
public:
    bool isPrime(int n) {
        if (n < 2)
            return false;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }

    int countPrimeSetBits(int left, int right) {
        int ans = 0;

        for (int i = left; i <= right; i++) {
            int bits = __builtin_popcount(i);

            if (isPrime(bits))
                ans++;
        }

        return ans;
    }
};
