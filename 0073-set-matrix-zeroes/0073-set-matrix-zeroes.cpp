class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       int n=matrix.size();
        int m=matrix[0].size();
        
        unordered_multimap<int, int>mp;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j]==0){
                    mp.insert({i,j});
                }
            }
        }
        
        for(auto it:mp){
            int row=it.first;
            int column=it.second;
            
            
            for(int i=0; i<m; i++){
                matrix[row][i]=0;
            }
            
            for(int i=0; i<n; i++){
                matrix[i][column]=0;
            }
        }
        
        
    }
};