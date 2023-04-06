class Solution {
public:
    void dfs(vector<vector<int>>&gr, int i, int j){
        if(i==gr.size() || j==gr[0].size() || j<0 || i<0) return;
        if(gr[i][j]==1) return;
        gr[i][j]=1;
        dfs(gr, i+1, j);
        dfs(gr, i-1, j);
        dfs(gr, i, j-1);
        dfs(gr, i, j+1);
    }
    int closedIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0; i<n; i++){
            if(grid[i][0]==0){
                dfs(grid,i, 0);
                
            }
            if(grid[i][m-1]==0){
                dfs(grid, i, m-1);
            }
        }
        
        for(int i=0; i<m; i++){
            if(grid[0][i]==0){
                dfs(grid, 0, i);
            }
            if(grid[n-1][i]==0){
                dfs(grid, n-1, i);
            }
        }
        
        int c=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==0){
                    c++;
                    dfs(grid, i, j);
                }
            }
        }
        return c;
    }
};