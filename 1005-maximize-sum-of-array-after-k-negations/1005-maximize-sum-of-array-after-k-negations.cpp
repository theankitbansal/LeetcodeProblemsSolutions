class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            if(nums[i]<0 && k>0){
                nums[i]=-nums[i];
                k--;
            }
        }
        int sum=0;
        for(auto x:nums){
            sum+=x;
        }
        
        int m=*min_element(nums.begin(), nums.end());
        
        if(k%2!=0){
            sum+=(-2*m);
        }
        return sum;
        
    }
};