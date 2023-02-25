class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(), maxProfit=0;
        int buyAtPrice=INT_MAX;
        for(int i=0; i<n; i++){
            buyAtPrice=min(buyAtPrice, prices[i]);
            maxProfit=max(maxProfit, prices[i]-buyAtPrice);
        }
        return maxProfit;
            
    }
};