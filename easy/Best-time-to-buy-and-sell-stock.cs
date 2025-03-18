public class Solution {
    public int MaxProfit(int[] prices) {

        // minPrice, profit
        // price < minPrice -> update minPrice
        // prices[i] - minPrice > profit -> update profit

        int minPrice = prices[0];
        int profit = 0;
        for (int i = 1; i < prices.Length; i++)
        {
            if (prices[i] < minPrice) minPrice = prices[i];
            else if (prices[i] - minPrice > profit) profit = prices[i] - minPrice;
        }
        return profit;
    }
}