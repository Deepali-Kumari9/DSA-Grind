/*
 * Problem          : Best Time to Buy and Sell Stock
 * Platform         : LeetCode #121
 * Difficulty       : Easy
 * Topic            : Arrays / Greedy
 *
 * Approach         : Tracked minimum price seen so far and
 *                    maximum profit at each step.
 *                    For every price, updated minPrice and
 *                    checked if selling today gives better
 *                    profit than before.
 *                    Single pass O(n) solution.
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int price : prices) {
            minPrice = min(minPrice, price);
            maxProfit = max(maxProfit, price - minPrice);
        }

        return maxProfit;
    }
};
