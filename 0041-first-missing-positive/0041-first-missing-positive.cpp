class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
       
        for(int i=0; i<n; i++){
            int curr=nums[i];
            if(curr==i+1 || curr<=0 || curr>n){
                continue;
            }
            swap(nums[i], nums[curr-1]);
            if(nums[i]!=nums[curr-1]){
                i--;
            }
        }
        for(int i=0; i<n; i++){
            if(nums[i]!=i+1){
                return i+1;
            }
        }
        return n+1;
    }
};