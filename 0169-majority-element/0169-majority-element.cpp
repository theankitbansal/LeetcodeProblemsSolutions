class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        map<int, int>mp;
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }
        
        int ans=nums[0], maxi=1;
        for(auto &it:mp){
            if(it.second>=maxi){
                maxi=it.second;
                ans=it.first;
            }
        }
        
        return ans;
        
    }
};