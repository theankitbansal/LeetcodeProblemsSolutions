class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>s;
        
        for(auto it:nums){
            s.insert(it);
        }
        
        vector<int>temp;
        
        for(auto i:s){
            temp.push_back(i);
        }
        
        if(s.size()>=3){
            return temp[temp.size()-3];
        }else{
            return temp[temp.size()-1];
        }
    }
};