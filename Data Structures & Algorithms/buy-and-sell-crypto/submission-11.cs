public class Solution {
    public int MaxProfit(int[] prices) {
        if(prices.Length == 0) return 0;
        int current_lowest_price = prices[0];
        int max_profit = 0;

        for(int i = 1; i < prices.Length; i++){
            if(prices[i] < current_lowest_price){
                current_lowest_price = prices[i];
            }
            else{
                int current_profit = prices[i] - current_lowest_price;
                if(current_profit > max_profit){
                max_profit = current_profit;
                }
            }
        }

        return max_profit;
    }
}
