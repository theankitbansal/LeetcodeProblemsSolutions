class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalSum=0;
        int currSum1=0;
        int currSum2=0;
        int mxSumSubary=INT_MIN;
        int minSumSubary=INT_MAX;
        
        for(auto i:nums){
            totalSum+=i;
            currSum1+=i;
            currSum2+=i;
            mxSumSubary=max(mxSumSubary, currSum1);
            if(currSum1<0) currSum1=0;
            minSumSubary=min(currSum2, minSumSubary);
            if(currSum2>0) currSum2=0;
        }
        return (totalSum==minSumSubary)?mxSumSubary:max(mxSumSubary, totalSum-minSumSubary);
    }
};