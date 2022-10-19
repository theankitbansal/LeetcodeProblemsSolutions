class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>v={{}};
        for(auto num:nums){
            int n=v.size();
            for(int i=0; i<n; i++){
                v.push_back(v[i]);
                v.back().push_back(num);
            }
        }
        return v;
    }
};