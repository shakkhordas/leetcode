class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int boughtFor = prices[0];

        for (int i=1; i<prices.size(); i++) {
            if (prices[i]>boughtFor) {
                if (prices[i]-boughtFor > profit)
                    profit = prices[i]-boughtFor;
            }
            else
                boughtFor = prices[i];
        }

        return profit;
    }
};
