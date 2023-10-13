class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int Buy=prices[0];
        int profit=0;

        for(int i=1;i<prices.size();i++){

            if(prices[i]>Buy){
                profit=max(profit,prices[i]-Buy);
            }
            Buy=min(Buy,prices[i]); //minimizing for max profit...

        }
        return profit;
        
    }
};