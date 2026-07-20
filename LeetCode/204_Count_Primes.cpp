/*
    Problem: 204. Count Primes
    Platform: LeetCode
    Difficulty: Medium

    Approach:
    - Use the Sieve of Eratosthenes.
    - Mark all numbers as prime initially.
    - Starting from 2, eliminate multiples of every prime.
    - Count the remaining prime numbers less than n.

    Time Complexity: O(n log log n)
    Space Complexity: O(n)
*/

class Solution {
public:
    int countPrimes(int n) {
        vector<bool> prime(n, true);

        if (n <= 2)
            return 0;

        prime[0] = false;
        prime[1] = false;

        for (int i = 2; i * i < n; i++) {
            if (prime[i]) {
                for (long long j = 1LL * i * i; j < n; j += i) {
                    prime[j] = false;
                }
            }
        }

        int count = 0;

        for (int i = 2; i < n; i++) {
            if (prime[i])
                count++;
        }

        return count;
    }
};
