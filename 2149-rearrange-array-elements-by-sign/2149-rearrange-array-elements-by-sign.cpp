class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans(nums.size());
        int i=0;
        int j=1;
        int k=0;
        while(k<nums.size()){
            if(nums[k]>0){
                ans[i]=nums[k];
                i=i+2;
                k++;
                continue;
            }
            if(nums[k]<0){
                ans[j]=nums[k];
                j=j+2;
                k++;
                continue;
            }
        }
        return ans;
        
    }
};