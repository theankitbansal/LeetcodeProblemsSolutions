class Solution {
public:
    void solve(vector<int>&nums, set<vector<int>>&ans, vector<int>&temp, int n){
        if(n>=nums.size()){
            if(temp.size()>1)
                ans.insert(temp);
            return;
        }
        
        if(!temp.size()){
            temp.push_back(nums[n]);
            solve(nums, ans, temp, n+1);
            temp.pop_back();
            solve(nums, ans, temp, n+1);
        }else{
            if(nums[n]>=temp[temp.size()-1]){
                temp.push_back(nums[n]);
                solve(nums, ans, temp, n+1);
                temp.pop_back();
                solve(nums, ans, temp, n+1);
            }
            else{
                solve(nums, ans, temp, n+1);
            }
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>>ans;
        vector<int>temp;
        vector<vector<int>>res;
        
        solve(nums, ans, temp, 0);
        
        for(auto &x:ans)
            res.push_back(x);
        return res;
    }
};