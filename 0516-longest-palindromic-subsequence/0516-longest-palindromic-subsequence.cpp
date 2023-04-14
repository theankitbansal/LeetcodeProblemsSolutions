class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string s1=s;
        reverse(s.begin(), s.end());
        int n=s.length(),i,j;
        vector<vector<int>>dp(n+1,vector<int>(n+2,0));
        for(i=1; i<=n; i++){
            for(j=1; j<=n; j++){
                if(s[i-1]==s1[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                    
                }else{
                    dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return dp[n][n];
    }
};