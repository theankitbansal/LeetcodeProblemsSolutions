class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
       set<int>r;
        
        
        for(int i=0; i<nums1.size(); i++){
            if(i>0 &&nums1[i]==nums1[i-1]){
                continue;
            }
            
            for(int j=0; j<nums2.size(); j++){
                if(nums1[i]==nums2[j]){
                    r.insert(nums1[i]);
                    break;
                }
            }
        }
        
        v.assign(r.begin(), r.end());
        return v;
        
    }
};