class Solution {
public:
    int solve(vector<int>&nums, int mid,int k){
        int total=0;
        int j=0;
        
        for(int i=0; i<nums.size(); i++){
            while(j<nums.size() && nums[j]-nums[i]<=mid) j++;
            j--;
            total+=(j-i);
        }
        return total >=k;
    }
    
    int smallestDistancePair(vector<int>& nums, int k) {
        
        int n=nums.size();
        sort(nums.begin(), nums.end());
        
        int L=0, R=nums[n-1]-nums[0];
        
        while(L<R){
            int mid=L+(R-L)/2;
            if(solve(nums, mid, k)) R=mid;
            else L=mid+1;
        }
        return L;
    }
};