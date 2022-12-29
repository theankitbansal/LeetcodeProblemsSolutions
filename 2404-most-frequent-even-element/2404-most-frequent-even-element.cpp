class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int, int>mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        
        int ans=-1, maxi=-1;
        
        for(auto &i:mp){
            if(i.first%2==0 && i.second>maxi){
                maxi=i.second;
                ans=i.first;
            }
        }
        return ans;
        
    }
};