class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& a) {
        int mx=INT_MAX;
        int n=a.size();
        int m=n;
        for(int i=0;i<n; i++){
            for(int j=0; j<m; j++){
                if(j==0 and j+1<m and i){
                    a[i][j] = a[i][j]+min({a[i-1][j+1], a[i-1][j]});
                }
                if(j==m-1 and j-1>=0 and i){
                    a[i][j]=a[i][j]+min({a[i-1][j-1], a[i-1][j]});
                }
                
                if(j-1>=0 and j+1<m and i){
                    a[i][j]=a[i][j]+min({a[i-1][j-1], a[i-1][j], a[i-1][j+1]});
                }
                if(i==n-1){
                    mx=min(mx, a[i][j]);
                }
            }
        }
        return mx;
    }
};