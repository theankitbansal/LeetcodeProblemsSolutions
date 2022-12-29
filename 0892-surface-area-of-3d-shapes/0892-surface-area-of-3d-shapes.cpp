class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int ans=0;
        int n=grid.size();
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                int x=grid[i][j];
                if(x) ans=ans+x*4+2;
                if(i) ans-=2*min(x, grid[i-1][j]);
                if(j) ans-=2*min(x, grid[i][j-1]);
            }
        }
        return ans;
    }
};