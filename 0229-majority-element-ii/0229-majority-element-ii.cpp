class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int x=floor(n/3);
        
        unordered_map<int, int>mp;
        for(auto &i:nums)
            mp[i]++;
        
        vector<int>v;
        for(auto &i:mp){
            if(i.second>x){
               v.push_back(i.first); 
            }
        }
        return v;
    }
};