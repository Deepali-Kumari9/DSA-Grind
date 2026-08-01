/*
    Problem: 122. Best Time to Buy and Sell Stock II
    Platform: LeetCode
    Language: C++17

    Approach:
    - Traverse the prices array once.
    - Whenever the price on the current day is greater than the previous day,
      add the difference to the total profit.
    - This works because every increasing segment can be split into multiple
      profitable transactions without reducing the overall profit.

    Time Complexity: O(N)
    Space Complexity: O(1)

    where:
    - N = number of days (size of the prices array)
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;

        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] > prices[i - 1]) {
                profit += prices[i] - prices[i - 1];
            }
        }

        return profit;
    }
};
