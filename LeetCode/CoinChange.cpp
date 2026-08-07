/*
    Problem: Coin Change
    Platform: LeetCode
    Language: C++17

    Approach:
    - Use Dynamic Programming (Bottom-Up).
    - Let dp[i] represent the minimum number of coins needed to make amount i.
    - Initialize all values with amount + 1 (acts as infinity), except dp[0] = 0.
    - For every amount from 1 to target:
        * Try every coin.
        * If the coin can contribute, update:
              dp[i] = min(dp[i], dp[i - coin] + 1)
    - If dp[amount] is still amount + 1, return -1.
    - Otherwise return dp[amount].

    Time Complexity: O(amount × number_of_coins)
    Space Complexity: O(amount)
*/

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount + 1, amount + 1);
        dp[0] = 0;

        for (int i = 1; i <= amount; i++) {
            for (int coin : coins) {
                if (coin <= i) {
                    dp[i] = min(dp[i], dp[i - coin] + 1);
                }
            }
        }

        if (dp[amount] == amount + 1)
            return -1;

        return dp[amount];
    }
};
