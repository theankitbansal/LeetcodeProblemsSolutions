class Solution {
public:
    int t[301][11];
    int helper(vector<int>&mat, int n, int idx, int d){
        if(d==1){
            return *max_element(begin(mat)+idx, end(mat));
        }
        if(t[idx][d]!=-1){
            return t[idx][d];
        }
        
        int maxi=INT_MIN;
        int ans=INT_MAX;
        
        for(int i=idx;i<=n-d; i++){
            maxi=max(maxi, mat[i]);
            ans=min(ans, maxi+helper(mat, n, i+1, d-1));
        }
        return t[idx][d]=ans;
    }
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        int n=jobDifficulty.size();
        if(n<d){
            return -1;
        }
        memset(t, -1, sizeof(t));
        return helper(jobDifficulty, n, 0, d);
    }
};