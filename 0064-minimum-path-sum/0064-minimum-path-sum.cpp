class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        for(int l=0; l<row; l++){
            for(int j=0; j<col; j++){
                if(l-1>=0 && j-1>=0)
                    grid[l][j]+=min(grid[l-1][j], grid[l][j-1]);
                else if(l-1>=0)
                    grid[l][j]+=grid[l-1][j];
                else if(j-1>=0)
                    grid[l][j]+=grid[l][j-1];
            }
        }
        return grid[row-1][col-1];
    }
};