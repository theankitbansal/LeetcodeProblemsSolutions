class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int prefixSum=0;
        unordered_map<int, int>mp;
        mp[0]=-1;
        
        for(int i=0; i<nums.size(); i++){
            prefixSum+=nums[i];
            int x=prefixSum%k;
            if(mp.find(x)!=mp.end()){
                if(i-mp[x]>1)
                    return true;
            }else{
                mp[x]=i;
            }
        }
        return false;
    }
};