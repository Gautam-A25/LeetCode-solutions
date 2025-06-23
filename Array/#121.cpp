class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int minP = prices[0], profit = 0;
            for(int i = 0; i < prices.size(); i++){
                if(prices[i] < minP) minP = prices[i];
                profit = max(profit, prices[i] - minP);
            }
            return profit;
        }
    };