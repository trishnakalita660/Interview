class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minm=INT_MAX, profit=0;
        for(int i=0;i<prices.size();i++){
            minm = min(minm,prices[i]);
            profit = max(profit, prices[i]-minm);
        }
        return profit;
    }
};