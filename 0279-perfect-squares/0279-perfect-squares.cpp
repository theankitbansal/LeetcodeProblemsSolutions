class Solution {
public:
    vector<int>dp;
    int numSquares(int n) {
        dp.resize(n+1,0);
        
        for(int j=1; j<=n; j++){
            int mini=INT_MAX;
            for(int i=1; i*i<=j;i++)
                mini=min(mini, 1+dp[j-i*i]);
            dp[j]=mini;
        }
        return dp[n];
    }
    
};