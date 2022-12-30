class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int currSum=0;
        int maxSum=INT_MIN;
        int posMax=0, negMax=0;
        
        int n=nums.size();
        
        for(int i=0; i<n; i++){
            currSum+=nums[i];
            nums[i]*=-1;
            maxSum=max(currSum, maxSum);
            
            if(currSum<0)
                currSum=0;
        }
        
        posMax=maxSum;
        currSum=0;
        maxSum=INT_MIN;
        
        for(int i=0; i<n; i++){
            currSum+=nums[i];
            maxSum=max(maxSum, currSum);
            
            if(currSum<0)
                currSum=0;
        }
        
        negMax=maxSum;
        return max(posMax, negMax);
        
    }
};