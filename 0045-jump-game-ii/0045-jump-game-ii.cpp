class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        if(n<2) return 0;
       int jump=1;
        int far=nums[0];
        int curr=nums[0];
        
        for(int i=0; i<n-1; i++){
            far=max(far, nums[i]+i);
            if(curr==i){
                jump++;
                curr=far;
            }
        }
        return jump;
        
        
    }
};