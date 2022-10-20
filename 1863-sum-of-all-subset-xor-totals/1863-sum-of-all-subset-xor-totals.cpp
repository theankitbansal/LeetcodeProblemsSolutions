class Solution {
public:
   int res;
    void solve(vector<int>&nums, int sum, int i){
        if(i==nums.size()-1){
            res+=sum+(sum^nums[i]);
            return;
        }
        solve(nums, sum, i+1);
        solve(nums, sum^nums[i], i+1);
    }
    
    int subsetXORSum(vector<int>& nums) {
        res=0;
        solve(nums, 0,0);
        return res;
    }
};